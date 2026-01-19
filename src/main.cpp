#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>

int main()
{
    bn::core::init();

    bn::backdrop::set_color(bn::color(21, 15, 14));

    while (true)
    {
        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 11, 22));
        }

        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(12, 11, 2));
        }

        bn::core::update();
    }
}