#ifndef	CONFIG_VALUE_H
#define	CONFIG_VALUE_H

class Config;
class ConfigType;

struct ConfigValue {
	Config *config_;
	ConfigType *type_;

	ConfigValue(Config *config, ConfigType *type)
	: config_(config),
	  type_(type)
	{ }

	~ConfigValue()
	{ }
};

#endif /* !CONFIG_VALUE_H */