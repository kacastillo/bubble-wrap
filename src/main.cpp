#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>

int main()
{
    bn::core::init();
    bn::vector<bn::sprite_ptr, 10> circles = {};
    
    for (int x = -40; x <= 40; x += 10)
    {
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
        circles.push_back(myCircle);
    }
    
    // Apply transformations to different sprites
    circles[0].set_scale(1.8);           // First sprite - larger
    circles[1].set_scale(0.5);           // Second sprite - smaller (50%)
    circles[2].set_scale(2.0);           // Third sprite - double size
    circles[3].set_horizontal_scale(0.5); // Fourth sprite - squeezed horizontally
    circles[4].set_vertical_scale(2.0);   // Fifth sprite - stretched vertically
    circles[5].set_shear(0.5);           // Sixth sprite - sheared
    circles[6].set_rotation_angle(45);    // Seventh sprite - rotated
    
    // Try multiple transformations on one sprite
    circles[7].set_scale(1.5);
    circles[7].set_rotation_angle(30);
    
    bn::backdrop::set_color(bn::color(21, 15, 14));
    
    while (true)
    {
        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 11, 22));
        }
        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(12, 22, 2));
        }
        bn::core::update();
    }
}