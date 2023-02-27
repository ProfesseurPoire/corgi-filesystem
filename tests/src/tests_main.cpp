#include "corgi/filesystem/FileSystem.h"
#include "corgi/test/test.h"

TEST(test_filesystem, create_directory)
{
    assert_that(true, corgi::test::equals(true));

    corgi::filesystem::create_directory("dir");
    assert_that(corgi::filesystem::file_exist("dir"), corgi::test::equals(true));

    corgi::filesystem::remove("dir");
    assert_that(corgi::filesystem::file_exist("dir"), corgi::test::equals(false));
}

int main()
{
    corgi::test::run_all();
}
