#ifndef SENECA_WEAPONINTERFACE_H__
#define SENECA_WEAPONINTERFACE_H__
namespace seneca {
	class WeaponInterface
	{
	public:
		virtual void aim() const = 0;
		virtual void fire() const = 0;
		virtual void reload() const = 0;
		virtual ~WeaponInterface() = default;
	};
}
#endif
