struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 395,
		.content =
			"Processor\t: ARMv7 Processor rev 0 (v7l)\n"
			"processor\t: 0\n"
			"BogoMIPS\t: 13.53\n"
			"\n"
			"processor\t: 1\n"
			"BogoMIPS\t: 13.53\n"
			"\n"
			"processor\t: 2\n"
			"BogoMIPS\t: 13.53\n"
			"\n"
			"processor\t: 3\n"
			"BogoMIPS\t: 13.53\n"
			"\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 \n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0x06f\n"
			"CPU revision\t: 0\n"
			"\n"
			"Hardware\t: SAMSUNG JF\n"
			"Revision\t: 000a\n"
			"Serial\t\t: 000012a70000ac49\n",
	},
	{
		.path = "/system/build.prop",
		.size = 6846,
		.content =
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=KOT49H\n"
			"ro.build.display.id=KOT49H.I337UCUFNC1\n"
			"ro.build.version.incremental=I337UCUFNC1\n"
			"ro.build.version.sdk=19\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.release=4.4.2\n"
			"ro.build.date=Tue Mar 25 13:32:47 KST 2014\n"
			"ro.build.date.utc=1395721967\n"
			"ro.build.type=user\n"
			"ro.build.user=dpi\n"
			"ro.build.host=SWDD5916\n"
			"ro.build.tags=release-keys\n"
			"ro.product.model=SAMSUNG-SGH-I337\n"
			"ro.product.brand=samsung\n"
			"ro.product.name=jflteuc\n"
			"ro.product.device=jflteatt\n"
			"ro.product.board=MSM8960\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8960\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=jflteatt\n"
			"# Do not try to parse ro.build.description or .fingerprint\n"
			"ro.build.description=jflteuc-user 4.4.2 KOT49H I337UCUFNC1 release-keys\n"
			"ro.build.fingerprint=samsung/jflteuc/jflteatt:4.4.2/KOT49H/I337UCUFNC1:user/release-keys\n"
			"ro.build.characteristics=att\n"
			"# Samsung Specific Properties\n"
			"ro.build.PDA=I337UCUFNC1\n"
			"ro.build.hidden_ver=I337UCUFNC1\n"
			"ro.build.changelist=1125940\n"
			"ro.product_ship=true\n"
			"ro.chipname=apq8064\n"
			"# end build properties\n"
			"#\n"
			"# from device/samsung/jflteatt/system.prop\n"
			"#\n"
			"#\n"
			"# system.prop for surf\n"
			"#\n"
			"\n"
			"ro.sf.lcd_density=480\n"
			"\n"
			"rild.libpath=/system/lib/libsec-ril.so\n"
			"rild.libargs=-d /dev/smd0\n"
			"persist.rild.nitz_plmn=\n"
			"persist.rild.nitz_long_ons_0=\n"
			"persist.rild.nitz_long_ons_1=\n"
			"persist.rild.nitz_long_ons_2=\n"
			"persist.rild.nitz_long_ons_3=\n"
			"persist.rild.nitz_short_ons_0=\n"
			"persist.rild.nitz_short_ons_1=\n"
			"persist.rild.nitz_short_ons_2=\n"
			"persist.rild.nitz_short_ons_3=\n"
			"ril.subscription.types=NV,RUIM\n"
			"DEVICE_PROVISIONED=1\n"
			"debug.sf.hw=1\n"
			"debug.egl.hw=1\n"
			"debug.composition.type=gpu\n"
			"dalvik.vm.heapsize=36m\n"
			"debug.enable.wl_log=1\n"
			"persist.hwc.mdpcomp.enable=true\n"
			"debug.mdpcomp.logs=0\n"
			"\n"
			"#\n"
			"# system props for the cne module\n"
			"#\n"
			"persist.cne.feature=0\n"
			"\n"
			"lpa.decode=false\n"
			"tunnel.decode=true\n"
			"tunnel.audiovideo.decode=false\n"
			"lpa.use-stagefright=true\n"
			"qcom.hw.aac.encoder=true\n"
			"\n"
			"#system props for the MM modules\n"
			"\n"
			"media.stagefright.enable-player=true\n"
			"media.stagefright.enable-http=true\n"
			"media.stagefright.enable-aac=true\n"
			"media.stagefright.enable-qcp=true\n"
			"media.stagefright.enable-fma2dp=true\n"
			"media.stagefright.enable-scan=true\n"
			"mmp.enable.3g2=true\n"
			"media.aac_51_output_enabled=true\n"
			"#33395 is sum of supported format flags in AAL\n"
			"#Formats: AVI AC3 ASF AAC QCP DTS 3G2\n"
			"mm.enable.qcom_parser=33395\n"
			"\n"
			"#\n"
			"# system props for the data modules\n"
			"#\n"
			"ro.use_data_netmgrd=true\n"
			"persist.data.netmgrd.qos.enable=false\n"
			"\n"
			"#system props for time-services\n"
			"persist.timed.enable=true\n"
			"\n"
			"# System props for audio\n"
			"persist.audio.fluence.mode=endfire\n"
			"persist.audio.vr.enable=false\n"
			"persist.audio.handset.mic=digital\n"
			"persist.audio.lowlatency.rec=false\n"
			"\n"
			"# System prop to select audio resampler quality\n"
			"af.resampler.quality=255\n"
			"# System prop to select MPQAudioPlayer by default on mpq8064\n"
			"mpq.audio.decode=true\n"
			"\n"
			"#\n"
			"# system prop for opengles version\n"
			"#\n"
			"# 196608 is decimal for 0x30000 to report version 3\n"
			"ro.opengles.version=196608\n"
			"\n"
			"# system prop for requesting Master role in incoming Bluetooth connection.\n"
			"#\n"
			"ro.bluetooth.request.master=true\n"
			"#\n"
			"# system prop for Bluetooth Auto connect for remote initated connections\n"
			"#\n"
			"ro.bluetooth.remote.autoconnect=true\n"
			"# system property for Bluetooth discoverability time out in seconds\n"
			"# 0: Always discoverable\n"
			"#debug.bt.discoverable_time=0\n"
			"\n"
			"#system prop for switching gps driver to qmi\n"
			"persist.gps.qmienabled=true\n"
			"\n"
			"#System prop to enable ehrpd capability\n"
			"ro.config.ehrpd=true\n"
			"\n"
			"# System property for cabl\n"
			"ro.qualcomm.cabl=0\n"
			"\n"
			"\n"
			"# System prop for sending transmit power request to RIL during WiFi hotspot on/off\n"
			"#\n"
			"ro.ril.transmitpower=true\n"
			"\n"
			"\n"
			"#Simulate sdcard on /data/media\n"
			"#\n"
			"persist.fuse_sdcard=true\n"
			"ro.hwui.text_cache_width=2048\n"
			"\n"
			"#\n"
			"# Supports warmboot capabilities\n"
			"#\n"
			"ro.warmboot.capability=1\n"
			"\n"
			"#\n"
			"#snapdragon value add features\n"
			"#\n"
			"ro.qc.sdk.audio.ssr=false\n"
			"##fluencetype can be \"fluence\" or \"fluencepro\" or \"none\"\n"
			"ro.qc.sdk.audio.fluencetype=none\n"
			"ro.qc.sdk.camera.facialproc=true\n"
			"ro.qc.sdk.gestures.camera=false\n"
			"ro.qc.sdk.sensors.gestures=false\n"
			"#property to check if dynamic resolution change is  supported in framework\n"
			"ro.streaming.video.drs=true\n"
			"#property to enable user to access Google WFD settings.\n"
			"persist.debug.wfd.enable=1\n"
			"#property to choose between virtual/external wfd display\n"
			"persist.sys.wfd.virtual=0\n"
			"\n"
			"#system prop for setting rmnet mux mode\n"
			"persist.rmnet.mux=disabled\n"
			"\n"
			"#\n"
			"# System prop for Tvout/HDMI\n"
			"#\n"
			"persist.sys.camera.transform=0\n"
			"persist.sys.camera.connect=0\n"
			"persist.sys.videomode=0\n"
			"ro.hdmi.enable=true\n"
			"\n"
			"\n"
			"# System property for Default Brightness\n"
			"ro.lcd_min_brightness=10\n"
			"ro.lcd_brightness=143\n"
			"\n"
			"# System proverty for sys info indication\n"
			"persist.radio.add_power_save=1\n"
			"\n"
			"# Keep SIM state on LPM mode\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"\n"
			"# use se table when search list\n"
			"persist.radio.use_se_table_only=1\n"
			"\n"
			"# System prop for PLMN\n"
			"persist.radio.fill_eons=1\n"
			"\n"
			"# System prop for SPN\n"
			"persist.radio.prefer_spn=0\n"
			"\n"
			"media.enable-commonsource=true\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=128m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=2m\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"keyguard.no_require_sim=true\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.carrier=unknown\n"
			"ro.vendor.extension_library=/vendor/lib/libqc-opt.so\n"
			"ro.build.scafe=americano\n"
			"ro.build.scafe.size=short\n"
			"ro.build.scafe.shot=single\n"
			"ro.hdcp2.rx=tz\n"
			"ro.secwvk=144\n"
			"ro.securestorage.support=true\n"
			"security.mdpp=None\n"
			"ro.security.mdpp.ver=1.0\n"
			"ro.security.mdpp.release=2\n"
			"security.mdpp.result=None\n"
			"ro.sec.fle.encryption=true\n"
			"ro.hwui.texture_cache_size=48\n"
			"ro.hwui.layer_cache_size=32\n"
			"ro.hwui.path_cache_size=8\n"
			"ro.hwui.shape_cache_size=2\n"
			"ro.hwui.gradient_cache_size=1\n"
			"ro.hwui.drop_shadow_cache_size=4\n"
			"ro.hwui.texture_cache_flush_rate=0.5\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=512\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"ro.error.receiver.default=com.samsung.receiver.error\n"
			"ro.config.ringtone=ATT_Firefly_Default.ogg\n"
			"ro.config.notification_sound=Whisper.ogg\n"
			"ro.config.alarm_alert=Alarm_Morning_flower.ogg\n"
			"ro.config.media_sound=Media_preview_Touch_the_light.ogg\n"
			"ro.security.mdpp.ux=Enabled\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.clientidbase=android-samsung\n"
			"ro.com.google.clientidbase.ms=android-att-us\n"
			"ro.com.google.clientidbase.am=android-att-us\n"
			"ro.com.google.clientidbase.yt=android-samsung\n"
			"ro.com.google.clientidbase.gmm=android-samsung\n"
			"ro.com.google.gmsversion=4.4.2_r1\n"
			"persist.sys.dalvik.vm.lib=libdvm.so\n"
			"ro.kernel.qemu=0\n"
			"ro.build.selinux=1\n"
			"ro.config.knox=1\n"
			"ro.config.tima=1\n"
			"ro.config.timaversion=2.0\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.qc.sdk.izat.premium_enabled=1\n"
			"ro.qc.sdk.izat.service_mask=0x5\n"
			"persist.gps.qc_nlp_in_use=0\n"
			"ro.gps.agps_provider=1\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1890000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{ NULL },
};
