/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenkeyboard_screen/ScreenKeyboardViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenKeyboardViewBase::ScreenKeyboardViewBase() :
    buttonCallback(this, &ScreenKeyboardViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(92, 92, 92));
    add(box1);

    buttonWithLabelCancel.setXY(0, 212);
    buttonWithLabelCancel.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonWithLabelCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_KZ57));
    buttonWithLabelCancel.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelCancel.setAction(buttonCallback);
    add(buttonWithLabelCancel);

    buttonWithLabelOk.setXY(419, 212);
    buttonWithLabelOk.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonWithLabelOk.setLabelText(touchgfx::TypedText(T___SINGLEUSE_KTJX));
    buttonWithLabelOk.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelOk.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelOk.setAction(buttonCallback);
    add(buttonWithLabelOk);
}

ScreenKeyboardViewBase::~ScreenKeyboardViewBase()
{

}

void ScreenKeyboardViewBase::setupScreen()
{

}

void ScreenKeyboardViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabelCancel)
    {
        //ButtonCancel
        //When buttonWithLabelCancel clicked change screen to ScreenSettings
        //Go to ScreenSettings with no screen transition
        application().gotoScreenSettingsScreenNoTransition();
    }
    if (&src == &buttonWithLabelOk)
    {
        //ButtonOk
        //When buttonWithLabelOk clicked call virtual function
        //Call getBuffer
        getBuffer();
    
        //ChangeToScreenSettings
        //When ButtonOk completed change screen to ScreenSettings
        //Go to ScreenSettings with no screen transition
        application().gotoScreenSettingsScreenNoTransition();
    }
}