#include "almacen.cc"
#include "time.h"
#include "gtest/gtest.h"

class TimeF : public testing::Test{
    public:
    virtual void SetUp(){
        tiempo = time(NULL);
    }
    virtual void TearDown(){
        EXPECT_TRUE(time(NULL) - tiempo <= 1) << "tardo mucho tiempo\n";
    }
    private:
    time_t tiempo;
};

class AlmacenJ: public TimeF{
	public:
		void SetUp(){
            TimeF::SetUp();
		}
		void TearDown(){
            TimeF::TearDown();
		}
        static void SetUpTestCase(){
            a = new Almacen(10);
        }
        static void TearDownTestCase(){
            delete a;
        }
		static Almacen* a;
};

Almacen* AlmacenJ::a = 0;

TEST_F(AlmacenJ, constructor){
	ASSERT_EQ(10, a->lista->capacity());
}

TEST_F(AlmacenJ, add){
	a->add(3);
    sleep(2);
	ASSERT_EQ(1, a->lista->size());
}

TEST_F(AlmacenJ, delet){
	a->delet(0);
	ASSERT_EQ(0, a->lista->size());
}

TEST_F(AlmacenJ, empty){
	ASSERT_EQ(true, a->empty());
}

TEST_F(AlmacenJ, size){
	ASSERT_EQ(0, a->size());
}