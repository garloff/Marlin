# Example Configurations for Deezmaker BukoBot v2, Bukobot v2 Duo and Bukito (http://www.deezmaker.com/)

This is a 3-in-1 Configuration file set for Deezmaker's BukoBot v2, BukoBot v2 Duo and the Bukito.
The AVR MCU board type determines which of the three is being used.

* ATmega 2560 -> Azteeg X3 -> BukoBot v2.1 Duo
* ATmega 1284P -> Sanguinololu 12 -> BukoBot v2.1
* AT90USB1286 -> ``SAV_MKI`` -> Bukito v1

# Author

This is based on Deezmaker's and WhatsaWhatsIs changed to the old per Marlin-1.0 code and includes
some adaptions done since by them. Kurt Garloff has forward ported these changes to Marlin-1.1.x.

# Status

This has been tested extensively on my BukoBot v2.1 Duo -- while I have forward ported the changes
for all three supported printers in the patch set, I have only access to my v2.1 Duo and thus only
tested there. While I would hope all 3 printers to basically work, experience tells me that untested
code never works as is. So I would hope that the code is very close to working for Buko v2.1 (non-Duo)
and at least reasonably close for the Bukito.

# Enabled features

* SD support
* EEPROM support
* S-Curve smoothing, Adaptive smoothing (multi-axis moves), diagonal homing (XY)
* Extruder fans (pin17) run when extruders or bed are warm
* Measured PID values for Bukov2Duo hotends (spitfire) and bed
* FWRETRACT (G10/G11), use M209 S0 to not do it without being requested

