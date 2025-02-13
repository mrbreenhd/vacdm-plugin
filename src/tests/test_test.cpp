#include <gtest/gtest.h>

#include "types/Pilot.h"

TEST(TypesTest, CheckInstaniation) {
    vacdm::types::Pilot_t pilot;
    EXPECT_EQ(pilot.callsign, "");
    EXPECT_EQ(pilot.lastUpdate, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.inactive, false);
    EXPECT_EQ(pilot.latitude, 0.0);
    EXPECT_EQ(pilot.longitude, 0.0);
    EXPECT_EQ(pilot.taxizoneIsTaxiout, false);
    EXPECT_EQ(pilot.origin, "");
    EXPECT_EQ(pilot.destination, "");
    EXPECT_EQ(pilot.runway, "");
    EXPECT_EQ(pilot.sid, "");
    EXPECT_EQ(pilot.eobt, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.tobt, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.tobt_state, "");
    EXPECT_EQ(pilot.ctot, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.ttot, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.tsat, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.exot, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.asat, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.aobt, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.atot, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.asrt, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.aort, vacdm::types::defaultTime);
    EXPECT_EQ(pilot.measures.size(), 0);
    EXPECT_EQ(pilot.hasBooking, false);
}

TEST(SampleTest, AssertionTrue) { EXPECT_TRUE(true); }

TEST(SampleTest, AssertionEqual) { EXPECT_EQ(1, 1); }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}