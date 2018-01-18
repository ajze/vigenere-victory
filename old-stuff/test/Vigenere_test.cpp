#include "catch/catch.h"

#include "../Lib1/inc/Vigenere.h"

TEST_CASE("Vigenere class basics", "[vigenere-basic]") {
    auto vig = new Vigenere();

    SECTION("actually gets default constructed") {
        REQUIRE(vig != nullptr);
    }
    SECTION("Test method returns 22") {
        REQUIRE(vig->TestTwentyTwo() == 22);
    }

    delete(vig);
}
