#include "sherlockservicesettingsfactory.h"

namespace sherlock
{

SherlockServiceSettingsFactory::SherlockServiceSettingsFactory()
{
    settings_ = std::make_shared<restbed::Settings>();
    settings_->set_port(8080);
    settings_->set_default_header("Connection", "close");
    settings_->set_default_header( "Access-Control-Allow-Origin", "*");
}

SherlockServiceSettingsFactory::SettingsPtrType SherlockServiceSettingsFactory::getSettings() const
{
    return settings_;
}

} // end namespace sherlock