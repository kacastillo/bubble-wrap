#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(29, 20, 17));

    while (true)
    {
        bn::core::update();
    }
}