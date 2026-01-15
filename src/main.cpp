#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(29, 20, 17));

    while (true)
    {
        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 11, 22));
        }

        bn::core::update();
    }
}