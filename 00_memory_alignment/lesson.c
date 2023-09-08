#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

struct sdb_interconnect {
    uint8_t			sdb_version;	

    union  stuff
    {

        bool      field1;

        double    field2;
    }m;

    struct sdb_field
    {
        bool      field3: 1;

        uint32_t  field4: 31;
    }n;

	uint16_t  sdb_records;	
}test;

int main(int argc, char **argv)
{
    printf("sizeof:struct sdb_interconnect = %d\n", sizeof(struct sdb_interconnect));
    printf("addr:sdb_version = %p\n", &test.sdb_version);
    printf("addr:test.m = %p,sizeof:test.m = %d\n", &test.m, sizeof(test.m));
    printf("addr:test.n = %p,sizeof:test.n = %d\n", &test.n, sizeof(test.n));
    printf("addr:sdb_records = %p\n", &test.sdb_records);

    return 0;
}