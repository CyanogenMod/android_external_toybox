// acpi abctV abctV
#ifdef CLEANUP_acpi
#undef CLEANUP_acpi
#undef FOR_acpi
#undef FLAG_V
#undef FLAG_t
#undef FLAG_c
#undef FLAG_b
#undef FLAG_a
#endif

// arp   vi:nDsdap:A:H:[+Ap][!sd]
#ifdef CLEANUP_arp
#undef CLEANUP_arp
#undef FOR_arp
#undef FLAG_H
#undef FLAG_A
#undef FLAG_p
#undef FLAG_a
#undef FLAG_d
#undef FLAG_s
#undef FLAG_D
#undef FLAG_n
#undef FLAG_i
#undef FLAG_v
#endif

// arping   <1>1s:I:w#<0c#<0AUDbqf[+AU][+Df]
#ifdef CLEANUP_arping
#undef CLEANUP_arping
#undef FOR_arping
#undef FLAG_f
#undef FLAG_q
#undef FLAG_b
#undef FLAG_D
#undef FLAG_U
#undef FLAG_A
#undef FLAG_c
#undef FLAG_w
#undef FLAG_I
#undef FLAG_s
#endif

// base64 diw#<1[!dw] diw#<1[!dw]
#ifdef CLEANUP_base64
#undef CLEANUP_base64
#undef FOR_base64
#undef FLAG_w
#undef FLAG_i
#undef FLAG_d
#endif

// basename <1>2 <1>2
#ifdef CLEANUP_basename
#undef CLEANUP_basename
#undef FOR_basename
#endif

// blkid <1 <1
#ifdef CLEANUP_blkid
#undef CLEANUP_blkid
#undef FOR_blkid
#endif

// blockdev <1>1(setro)(setrw)(getro)(getss)(getbsz)(setbsz)#<0(getsz)(getsize)(getsize64)(flushbufs)(rereadpt) <1>1(setro)(setrw)(getro)(getss)(getbsz)(setbsz)#<0(getsz)(getsize)(getsize64)(flushbufs)(rereadpt)
#ifdef CLEANUP_blockdev
#undef CLEANUP_blockdev
#undef FOR_blockdev
#undef FLAG_rereadpt
#undef FLAG_flushbufs
#undef FLAG_getsize64
#undef FLAG_getsize
#undef FLAG_getsz
#undef FLAG_setbsz
#undef FLAG_getbsz
#undef FLAG_getss
#undef FLAG_getro
#undef FLAG_setrw
#undef FLAG_setro
#endif

// bootchartd    
#ifdef CLEANUP_bootchartd
#undef CLEANUP_bootchartd
#undef FOR_bootchartd
#endif

// brctl   <1
#ifdef CLEANUP_brctl
#undef CLEANUP_brctl
#undef FOR_brctl
#endif

// bzcat    
#ifdef CLEANUP_bzcat
#undef CLEANUP_bzcat
#undef FOR_bzcat
#endif

// cal >2 >2
#ifdef CLEANUP_cal
#undef CLEANUP_cal
#undef FOR_cal
#endif

// cat u u
#ifdef CLEANUP_cat
#undef CLEANUP_cat
#undef FOR_cat
#undef FLAG_u
#endif

// catv vte vte
#ifdef CLEANUP_catv
#undef CLEANUP_catv
#undef FOR_catv
#undef FLAG_e
#undef FLAG_t
#undef FLAG_v
#endif

// cd    
#ifdef CLEANUP_cd
#undef CLEANUP_cd
#undef FOR_cd
#endif

// chattr    
#ifdef CLEANUP_chattr
#undef CLEANUP_chattr
#undef FOR_chattr
#endif

// chcon hRv hRv
#ifdef CLEANUP_chcon
#undef CLEANUP_chcon
#undef FOR_chcon
#undef FLAG_v
#undef FLAG_R
#undef FLAG_h
#endif

// chgrp <2hPLHRfv <2hPLHRfv
#ifdef CLEANUP_chgrp
#undef CLEANUP_chgrp
#undef FOR_chgrp
#undef FLAG_v
#undef FLAG_f
#undef FLAG_R
#undef FLAG_H
#undef FLAG_L
#undef FLAG_P
#undef FLAG_h
#endif

// chmod <2?vRf[-vf] <2?vRf[-vf]
#ifdef CLEANUP_chmod
#undef CLEANUP_chmod
#undef FOR_chmod
#undef FLAG_f
#undef FLAG_R
#undef FLAG_v
#endif

// chroot ^<1 ^<1
#ifdef CLEANUP_chroot
#undef CLEANUP_chroot
#undef FOR_chroot
#endif

// chvt <1 <1
#ifdef CLEANUP_chvt
#undef CLEANUP_chvt
#undef FOR_chvt
#endif

// cksum HIPLN HIPLN
#ifdef CLEANUP_cksum
#undef CLEANUP_cksum
#undef FOR_cksum
#undef FLAG_N
#undef FLAG_L
#undef FLAG_P
#undef FLAG_I
#undef FLAG_H
#endif

// clear    
#ifdef CLEANUP_clear
#undef CLEANUP_clear
#undef FOR_clear
#endif

// cmp <2>2ls <2>2ls
#ifdef CLEANUP_cmp
#undef CLEANUP_cmp
#undef FOR_cmp
#undef FLAG_s
#undef FLAG_l
#endif

// comm <2>2321 <2>2321
#ifdef CLEANUP_comm
#undef CLEANUP_comm
#undef FOR_comm
#undef FLAG_1
#undef FLAG_2
#undef FLAG_3
#endif

// compress   zcd9lrg[-cd][!zgLr]
#ifdef CLEANUP_compress
#undef CLEANUP_compress
#undef FOR_compress
#undef FLAG_g
#undef FLAG_r
#undef FLAG_l
#undef FLAG_9
#undef FLAG_d
#undef FLAG_c
#undef FLAG_z
#endif

// count    
#ifdef CLEANUP_count
#undef CLEANUP_count
#undef FOR_count
#endif

// cp <2RHLPprdaslvnFfi[-HLPd][-ni] <2RHLPprdaslvnFfi[-HLPd][-ni]
#ifdef CLEANUP_cp
#undef CLEANUP_cp
#undef FOR_cp
#undef FLAG_i
#undef FLAG_f
#undef FLAG_F
#undef FLAG_n
#undef FLAG_v
#undef FLAG_l
#undef FLAG_s
#undef FLAG_a
#undef FLAG_d
#undef FLAG_r
#undef FLAG_p
#undef FLAG_P
#undef FLAG_L
#undef FLAG_H
#undef FLAG_R
#endif

// cpio   mduH:p:|i|t|F:v(verbose)o|[!pio][!pot][!pF]
#ifdef CLEANUP_cpio
#undef CLEANUP_cpio
#undef FOR_cpio
#undef FLAG_o
#undef FLAG_verbose
#undef FLAG_v
#undef FLAG_F
#undef FLAG_t
#undef FLAG_i
#undef FLAG_p
#undef FLAG_H
#undef FLAG_u
#undef FLAG_d
#undef FLAG_m
#endif

// crond   fbSl#<0=8d#<0L:c:[-bf][-LS][-ld]
#ifdef CLEANUP_crond
#undef CLEANUP_crond
#undef FOR_crond
#undef FLAG_c
#undef FLAG_L
#undef FLAG_d
#undef FLAG_l
#undef FLAG_S
#undef FLAG_b
#undef FLAG_f
#endif

// crontab   c:u:elr[!elr]
#ifdef CLEANUP_crontab
#undef CLEANUP_crontab
#undef FOR_crontab
#undef FLAG_r
#undef FLAG_l
#undef FLAG_e
#undef FLAG_u
#undef FLAG_c
#endif

// cut b:|c:|f:|d:sn[!cbf] b:|c:|f:|d:sn[!cbf]
#ifdef CLEANUP_cut
#undef CLEANUP_cut
#undef FOR_cut
#undef FLAG_n
#undef FLAG_s
#undef FLAG_d
#undef FLAG_f
#undef FLAG_c
#undef FLAG_b
#endif

// date d:s:r:u[!dr] d:s:r:u[!dr]
#ifdef CLEANUP_date
#undef CLEANUP_date
#undef FOR_date
#undef FLAG_u
#undef FLAG_r
#undef FLAG_s
#undef FLAG_d
#endif

// dd    
#ifdef CLEANUP_dd
#undef CLEANUP_dd
#undef FOR_dd
#endif

// deallocvt   >1
#ifdef CLEANUP_deallocvt
#undef CLEANUP_deallocvt
#undef FOR_deallocvt
#endif

// df Pkt*a[-Pk] Pkt*a[-Pk]
#ifdef CLEANUP_df
#undef CLEANUP_df
#undef FOR_df
#undef FLAG_a
#undef FLAG_t
#undef FLAG_k
#undef FLAG_P
#endif

// dhcp   V:H:F:x*r:O*A#<0T#<0t#<0s:p:i:SBRCaovqnbf
#ifdef CLEANUP_dhcp
#undef CLEANUP_dhcp
#undef FOR_dhcp
#undef FLAG_f
#undef FLAG_b
#undef FLAG_n
#undef FLAG_q
#undef FLAG_v
#undef FLAG_o
#undef FLAG_a
#undef FLAG_C
#undef FLAG_R
#undef FLAG_B
#undef FLAG_S
#undef FLAG_i
#undef FLAG_p
#undef FLAG_s
#undef FLAG_t
#undef FLAG_T
#undef FLAG_A
#undef FLAG_O
#undef FLAG_r
#undef FLAG_x
#undef FLAG_F
#undef FLAG_H
#undef FLAG_V
#endif

// dhcpd   >1P#<0>65535=67fS
#ifdef CLEANUP_dhcpd
#undef CLEANUP_dhcpd
#undef FOR_dhcpd
#undef FLAG_S
#undef FLAG_f
#undef FLAG_P
#endif

// diff   <2>2B(ignore-blank-lines)d(minimal)b(ignore-space-change)ut(expand-tabs)w(ignore-all-space)i(ignore-case)T(initial-tab)s(report-identical-files)q(brief)a(text)L(label)*S(starting-file):N(new-file)r(recursive)U(unified)#<0=3
#ifdef CLEANUP_diff
#undef CLEANUP_diff
#undef FOR_diff
#undef FLAG_unified
#undef FLAG_U
#undef FLAG_recursive
#undef FLAG_r
#undef FLAG_new_file
#undef FLAG_N
#undef FLAG_starting_file
#undef FLAG_S
#undef FLAG_label
#undef FLAG_L
#undef FLAG_text
#undef FLAG_a
#undef FLAG_brief
#undef FLAG_q
#undef FLAG_report_identical_files
#undef FLAG_s
#undef FLAG_initial_tab
#undef FLAG_T
#undef FLAG_ignore_case
#undef FLAG_i
#undef FLAG_ignore_all_space
#undef FLAG_w
#undef FLAG_expand_tabs
#undef FLAG_t
#undef FLAG_u
#undef FLAG_ignore_space_change
#undef FLAG_b
#undef FLAG_minimal
#undef FLAG_d
#undef FLAG_ignore_blank_lines
#undef FLAG_B
#endif

// dirname <1 <1
#ifdef CLEANUP_dirname
#undef CLEANUP_dirname
#undef FOR_dirname
#endif

// dmesg rs#<1n#c rs#<1n#c
#ifdef CLEANUP_dmesg
#undef CLEANUP_dmesg
#undef FOR_dmesg
#undef FLAG_c
#undef FLAG_n
#undef FLAG_s
#undef FLAG_r
#endif

// dos2unix    
#ifdef CLEANUP_dos2unix
#undef CLEANUP_dos2unix
#undef FOR_dos2unix
#endif

// du d#<0hmlcaHkKLsx[-HL][-kKmh] d#<0hmlcaHkKLsx[-HL][-kKmh]
#ifdef CLEANUP_du
#undef CLEANUP_du
#undef FOR_du
#undef FLAG_x
#undef FLAG_s
#undef FLAG_L
#undef FLAG_K
#undef FLAG_k
#undef FLAG_H
#undef FLAG_a
#undef FLAG_c
#undef FLAG_l
#undef FLAG_m
#undef FLAG_h
#undef FLAG_d
#endif

// dumpleases   >0arf:[!ar]
#ifdef CLEANUP_dumpleases
#undef CLEANUP_dumpleases
#undef FOR_dumpleases
#undef FLAG_f
#undef FLAG_r
#undef FLAG_a
#endif

// echo ^?en ^?en
#ifdef CLEANUP_echo
#undef CLEANUP_echo
#undef FOR_echo
#undef FLAG_n
#undef FLAG_e
#endif

// eject   >1stT[!tT]
#ifdef CLEANUP_eject
#undef CLEANUP_eject
#undef FOR_eject
#undef FLAG_T
#undef FLAG_t
#undef FLAG_s
#endif

// env ^i ^i
#ifdef CLEANUP_env
#undef CLEANUP_env
#undef FOR_env
#undef FLAG_i
#endif

// exit    
#ifdef CLEANUP_exit
#undef CLEANUP_exit
#undef FOR_exit
#endif

// expand t* t*
#ifdef CLEANUP_expand
#undef CLEANUP_expand
#undef FOR_expand
#undef FLAG_t
#endif

// expr    
#ifdef CLEANUP_expr
#undef CLEANUP_expr
#undef FOR_expr
#endif

// factor    
#ifdef CLEANUP_factor
#undef CLEANUP_factor
#undef FOR_factor
#endif

// fallocate >1l#| >1l#|
#ifdef CLEANUP_fallocate
#undef CLEANUP_fallocate
#undef FOR_fallocate
#undef FLAG_l
#endif

// false    
#ifdef CLEANUP_false
#undef CLEANUP_false
#undef FOR_false
#endif

// fdisk   C#<0H#<0S#<0b#<512ul
#ifdef CLEANUP_fdisk
#undef CLEANUP_fdisk
#undef FOR_fdisk
#undef FLAG_l
#undef FLAG_u
#undef FLAG_b
#undef FLAG_S
#undef FLAG_H
#undef FLAG_C
#endif

// find ?^HL[-HL] ?^HL[-HL]
#ifdef CLEANUP_find
#undef CLEANUP_find
#undef FOR_find
#undef FLAG_L
#undef FLAG_H
#endif

// fold   bsuw#
#ifdef CLEANUP_fold
#undef CLEANUP_fold
#undef FOR_fold
#undef FLAG_w
#undef FLAG_u
#undef FLAG_s
#undef FLAG_b
#endif

// free tgmkb[!tgmkb] tgmkb[!tgmkb]
#ifdef CLEANUP_free
#undef CLEANUP_free
#undef FOR_free
#undef FLAG_b
#undef FLAG_k
#undef FLAG_m
#undef FLAG_g
#undef FLAG_t
#endif

// freeramdisk <1>1 <1>1
#ifdef CLEANUP_freeramdisk
#undef CLEANUP_freeramdisk
#undef FOR_freeramdisk
#endif

// fsck   ?t:ANPRTVsC#
#ifdef CLEANUP_fsck
#undef CLEANUP_fsck
#undef FOR_fsck
#undef FLAG_C
#undef FLAG_s
#undef FLAG_V
#undef FLAG_T
#undef FLAG_R
#undef FLAG_P
#undef FLAG_N
#undef FLAG_A
#undef FLAG_t
#endif

// fsfreeze <1>1f|u|[!fu] <1>1f|u|[!fu]
#ifdef CLEANUP_fsfreeze
#undef CLEANUP_fsfreeze
#undef FOR_fsfreeze
#undef FLAG_u
#undef FLAG_f
#endif

// fstype   <1
#ifdef CLEANUP_fstype
#undef CLEANUP_fstype
#undef FOR_fstype
#endif

// ftpget   <2cvu:p:P#<0=21>65535
#ifdef CLEANUP_ftpget
#undef CLEANUP_ftpget
#undef FOR_ftpget
#undef FLAG_P
#undef FLAG_p
#undef FLAG_u
#undef FLAG_v
#undef FLAG_c
#endif

// getty   <2t#<0H:I:l:f:iwnmLh
#ifdef CLEANUP_getty
#undef CLEANUP_getty
#undef FOR_getty
#undef FLAG_h
#undef FLAG_L
#undef FLAG_m
#undef FLAG_n
#undef FLAG_w
#undef FLAG_i
#undef FLAG_f
#undef FLAG_l
#undef FLAG_I
#undef FLAG_H
#undef FLAG_t
#endif

// grep ZzEFHabhinorsvwclqe*f*m#x[!wx][!EFw] ZzEFHabhinorsvwclqe*f*m#x[!wx][!EFw]
#ifdef CLEANUP_grep
#undef CLEANUP_grep
#undef FOR_grep
#undef FLAG_x
#undef FLAG_m
#undef FLAG_f
#undef FLAG_e
#undef FLAG_q
#undef FLAG_l
#undef FLAG_c
#undef FLAG_w
#undef FLAG_v
#undef FLAG_s
#undef FLAG_r
#undef FLAG_o
#undef FLAG_n
#undef FLAG_i
#undef FLAG_h
#undef FLAG_b
#undef FLAG_a
#undef FLAG_H
#undef FLAG_F
#undef FLAG_E
#undef FLAG_z
#undef FLAG_Z
#endif

// groupadd   <1>2g#<0S
#ifdef CLEANUP_groupadd
#undef CLEANUP_groupadd
#undef FOR_groupadd
#undef FLAG_S
#undef FLAG_g
#endif

// groupdel   <1>2
#ifdef CLEANUP_groupdel
#undef CLEANUP_groupdel
#undef FOR_groupdel
#endif

// gunzip   cflqStv
#ifdef CLEANUP_gunzip
#undef CLEANUP_gunzip
#undef FOR_gunzip
#undef FLAG_v
#undef FLAG_t
#undef FLAG_S
#undef FLAG_q
#undef FLAG_l
#undef FLAG_f
#undef FLAG_c
#endif

// gzip   d19dcflqStvgLRz[!gLRz]
#ifdef CLEANUP_gzip
#undef CLEANUP_gzip
#undef FOR_gzip
#undef FLAG_z
#undef FLAG_R
#undef FLAG_L
#undef FLAG_g
#undef FLAG_v
#undef FLAG_t
#undef FLAG_S
#undef FLAG_q
#undef FLAG_l
#undef FLAG_f
#undef FLAG_c
#undef FLAG_d
#undef FLAG_9
#undef FLAG_1
#undef FLAG_d
#endif

// head n#<0=10 n#<0=10
#ifdef CLEANUP_head
#undef CLEANUP_head
#undef FOR_head
#undef FLAG_n
#endif

// hello    
#ifdef CLEANUP_hello
#undef CLEANUP_hello
#undef FOR_hello
#endif

// help ah ah
#ifdef CLEANUP_help
#undef CLEANUP_help
#undef FOR_help
#undef FLAG_h
#undef FLAG_a
#endif

// host   <1>2avt:
#ifdef CLEANUP_host
#undef CLEANUP_host
#undef FOR_host
#undef FLAG_t
#undef FLAG_v
#undef FLAG_a
#endif

// hostname    
#ifdef CLEANUP_hostname
#undef CLEANUP_hostname
#undef FOR_hostname
#endif

// hwclock   >0(fast)f(rtc):u(utc)l(localtime)t(systz)w(systohc)s(hctosys)r(show)[!ul][!rsw]
#ifdef CLEANUP_hwclock
#undef CLEANUP_hwclock
#undef FOR_hwclock
#undef FLAG_show
#undef FLAG_r
#undef FLAG_hctosys
#undef FLAG_s
#undef FLAG_systohc
#undef FLAG_w
#undef FLAG_systz
#undef FLAG_t
#undef FLAG_localtime
#undef FLAG_l
#undef FLAG_utc
#undef FLAG_u
#undef FLAG_rtc
#undef FLAG_f
#undef FLAG_fast
#endif

// iconv   cst:f:
#ifdef CLEANUP_iconv
#undef CLEANUP_iconv
#undef FOR_iconv
#undef FLAG_f
#undef FLAG_t
#undef FLAG_s
#undef FLAG_c
#endif

// id >1nGgru[!Ggu] >1nGgru[!Ggu]
#ifdef CLEANUP_id
#undef CLEANUP_id
#undef FOR_id
#undef FLAG_u
#undef FLAG_r
#undef FLAG_g
#undef FLAG_G
#undef FLAG_n
#endif

// ifconfig ^?a ^?a
#ifdef CLEANUP_ifconfig
#undef CLEANUP_ifconfig
#undef FOR_ifconfig
#undef FLAG_a
#endif

// init    
#ifdef CLEANUP_init
#undef CLEANUP_init
#undef FOR_init
#endif

// inotifyd <2 <2
#ifdef CLEANUP_inotifyd
#undef CLEANUP_inotifyd
#undef FOR_inotifyd
#endif

// insmod <1 <1
#ifdef CLEANUP_insmod
#undef CLEANUP_insmod
#undef FOR_insmod
#endif

// install <1cdDpsvm:o:g: <1cdDpsvm:o:g:
#ifdef CLEANUP_install
#undef CLEANUP_install
#undef FOR_install
#undef FLAG_g
#undef FLAG_o
#undef FLAG_m
#undef FLAG_v
#undef FLAG_s
#undef FLAG_p
#undef FLAG_D
#undef FLAG_d
#undef FLAG_c
#endif

// ip    
#ifdef CLEANUP_ip
#undef CLEANUP_ip
#undef FOR_ip
#endif

// ipcrm   m*M*s*S*q*Q*
#ifdef CLEANUP_ipcrm
#undef CLEANUP_ipcrm
#undef FOR_ipcrm
#undef FLAG_Q
#undef FLAG_q
#undef FLAG_S
#undef FLAG_s
#undef FLAG_M
#undef FLAG_m
#endif

// ipcs   acptulsqmi#
#ifdef CLEANUP_ipcs
#undef CLEANUP_ipcs
#undef FOR_ipcs
#undef FLAG_i
#undef FLAG_m
#undef FLAG_q
#undef FLAG_s
#undef FLAG_l
#undef FLAG_u
#undef FLAG_t
#undef FLAG_p
#undef FLAG_c
#undef FLAG_a
#endif

// kill ?ls:  ?ls: 
#ifdef CLEANUP_kill
#undef CLEANUP_kill
#undef FOR_kill
#undef FLAG_s
#undef FLAG_l
#endif

// killall ?s:lqvi ?s:lqvi
#ifdef CLEANUP_killall
#undef CLEANUP_killall
#undef FOR_killall
#undef FLAG_i
#undef FLAG_v
#undef FLAG_q
#undef FLAG_l
#undef FLAG_s
#endif

// killall5   ?o*ls: [!lo][!ls]
#ifdef CLEANUP_killall5
#undef CLEANUP_killall5
#undef FOR_killall5
#undef FLAG_s
#undef FLAG_l
#undef FLAG_o
#endif

// klogd   c#<1>8n
#ifdef CLEANUP_klogd
#undef CLEANUP_klogd
#undef FOR_klogd
#undef FLAG_n
#undef FLAG_c
#endif

// last   f:W
#ifdef CLEANUP_last
#undef CLEANUP_last
#undef FOR_last
#undef FLAG_W
#undef FLAG_f
#endif

// link   <2>2
#ifdef CLEANUP_link
#undef CLEANUP_link
#undef FOR_link
#endif

// ln <1vnfs <1vnfs
#ifdef CLEANUP_ln
#undef CLEANUP_ln
#undef FOR_ln
#undef FLAG_s
#undef FLAG_f
#undef FLAG_n
#undef FLAG_v
#endif

// logger   st:p:
#ifdef CLEANUP_logger
#undef CLEANUP_logger
#undef FOR_logger
#undef FLAG_p
#undef FLAG_t
#undef FLAG_s
#endif

// login   >1fph:
#ifdef CLEANUP_login
#undef CLEANUP_login
#undef FOR_login
#undef FLAG_h
#undef FLAG_p
#undef FLAG_f
#endif

// losetup >2S(sizelimit)#s(show)ro#j:fdca[!afj] >2S(sizelimit)#s(show)ro#j:fdca[!afj]
#ifdef CLEANUP_losetup
#undef CLEANUP_losetup
#undef FOR_losetup
#undef FLAG_a
#undef FLAG_c
#undef FLAG_d
#undef FLAG_f
#undef FLAG_j
#undef FLAG_o
#undef FLAG_r
#undef FLAG_show
#undef FLAG_s
#undef FLAG_sizelimit
#undef FLAG_S
#endif

// ls (color):;goACFHLRSacdfiklmnpqrstux1[-1Cglmnox][-cu][-ftS][-HL] (color):;goACFHLRSacdfiklmnpqrstux1[-1Cglmnox][-cu][-ftS][-HL]
#ifdef CLEANUP_ls
#undef CLEANUP_ls
#undef FOR_ls
#undef FLAG_1
#undef FLAG_x
#undef FLAG_u
#undef FLAG_t
#undef FLAG_s
#undef FLAG_r
#undef FLAG_q
#undef FLAG_p
#undef FLAG_n
#undef FLAG_m
#undef FLAG_l
#undef FLAG_k
#undef FLAG_i
#undef FLAG_f
#undef FLAG_d
#undef FLAG_c
#undef FLAG_a
#undef FLAG_S
#undef FLAG_R
#undef FLAG_L
#undef FLAG_H
#undef FLAG_F
#undef FLAG_C
#undef FLAG_A
#undef FLAG_o
#undef FLAG_g
#undef FLAG_color
#endif

// lsattr vldaR vldaR
#ifdef CLEANUP_lsattr
#undef CLEANUP_lsattr
#undef FOR_lsattr
#undef FLAG_R
#undef FLAG_a
#undef FLAG_d
#undef FLAG_l
#undef FLAG_v
#endif

// lsmod    
#ifdef CLEANUP_lsmod
#undef CLEANUP_lsmod
#undef FOR_lsmod
#endif

// lspci emkn@i: emkn@i:
#ifdef CLEANUP_lspci
#undef CLEANUP_lspci
#undef FOR_lspci
#undef FLAG_i
#undef FLAG_n
#undef FLAG_k
#undef FLAG_m
#undef FLAG_e
#endif

// lsusb    
#ifdef CLEANUP_lsusb
#undef CLEANUP_lsusb
#undef FOR_lsusb
#endif

// makedevs <1>1d: <1>1d:
#ifdef CLEANUP_makedevs
#undef CLEANUP_makedevs
#undef FOR_makedevs
#undef FLAG_d
#endif

// md5sum b b
#ifdef CLEANUP_md5sum
#undef CLEANUP_md5sum
#undef FOR_md5sum
#undef FLAG_b
#endif

// mdev   s
#ifdef CLEANUP_mdev
#undef CLEANUP_mdev
#undef FOR_mdev
#undef FLAG_s
#endif

// mix   m:d:l#r#
#ifdef CLEANUP_mix
#undef CLEANUP_mix
#undef FOR_mix
#undef FLAG_r
#undef FLAG_l
#undef FLAG_d
#undef FLAG_m
#endif

// mkdir <1vpm: <1vpm:
#ifdef CLEANUP_mkdir
#undef CLEANUP_mkdir
#undef FOR_mkdir
#undef FLAG_m
#undef FLAG_p
#undef FLAG_v
#endif

// mke2fs   <1>2g:Fnqm#N#i#b#
#ifdef CLEANUP_mke2fs
#undef CLEANUP_mke2fs
#undef FOR_mke2fs
#undef FLAG_b
#undef FLAG_i
#undef FLAG_N
#undef FLAG_m
#undef FLAG_q
#undef FLAG_n
#undef FLAG_F
#undef FLAG_g
#endif

// mkfifo <1m: <1m:
#ifdef CLEANUP_mkfifo
#undef CLEANUP_mkfifo
#undef FOR_mkfifo
#undef FLAG_m
#endif

// mknod <2>4 <2>4
#ifdef CLEANUP_mknod
#undef CLEANUP_mknod
#undef FOR_mknod
#endif

// mkpasswd   >2S:m:P#=0<0
#ifdef CLEANUP_mkpasswd
#undef CLEANUP_mkpasswd
#undef FOR_mkpasswd
#undef FLAG_P
#undef FLAG_m
#undef FLAG_S
#endif

// mkswap <1>1 <1>1
#ifdef CLEANUP_mkswap
#undef CLEANUP_mkswap
#undef FOR_mkswap
#endif

// mktemp >1q(directory)d(tmpdir)p: >1q(directory)d(tmpdir)p:
#ifdef CLEANUP_mktemp
#undef CLEANUP_mktemp
#undef FOR_mktemp
#undef FLAG_p
#undef FLAG_tmpdir
#undef FLAG_d
#undef FLAG_directory
#undef FLAG_q
#endif

// modinfo <1b:k:F:0 <1b:k:F:0
#ifdef CLEANUP_modinfo
#undef CLEANUP_modinfo
#undef FOR_modinfo
#undef FLAG_0
#undef FLAG_F
#undef FLAG_k
#undef FLAG_b
#endif

// modprobe   alrqvsDb
#ifdef CLEANUP_modprobe
#undef CLEANUP_modprobe
#undef FOR_modprobe
#undef FLAG_b
#undef FLAG_D
#undef FLAG_s
#undef FLAG_v
#undef FLAG_q
#undef FLAG_r
#undef FLAG_l
#undef FLAG_a
#endif

// more    
#ifdef CLEANUP_more
#undef CLEANUP_more
#undef FOR_more
#endif

// mount ?O:afnrvwt:o*[-rw] ?O:afnrvwt:o*[-rw]
#ifdef CLEANUP_mount
#undef CLEANUP_mount
#undef FOR_mount
#undef FLAG_o
#undef FLAG_t
#undef FLAG_w
#undef FLAG_v
#undef FLAG_r
#undef FLAG_n
#undef FLAG_f
#undef FLAG_a
#undef FLAG_O
#endif

// mountpoint <1qdx[-dx] <1qdx[-dx]
#ifdef CLEANUP_mountpoint
#undef CLEANUP_mountpoint
#undef FOR_mountpoint
#undef FLAG_x
#undef FLAG_d
#undef FLAG_q
#endif

// mv <2vnFfi[-ni] <2vnFfi[-ni]
#ifdef CLEANUP_mv
#undef CLEANUP_mv
#undef FOR_mv
#undef FLAG_i
#undef FLAG_f
#undef FLAG_F
#undef FLAG_n
#undef FLAG_v
#endif

// nbd_client <3>3ns <3>3ns
#ifdef CLEANUP_nbd_client
#undef CLEANUP_nbd_client
#undef FOR_nbd_client
#undef FLAG_s
#undef FLAG_n
#endif

// netcat tl^L^w#p#s:q#f: tl^L^w#p#s:q#f:
#ifdef CLEANUP_netcat
#undef CLEANUP_netcat
#undef FOR_netcat
#undef FLAG_f
#undef FLAG_q
#undef FLAG_s
#undef FLAG_p
#undef FLAG_w
#undef FLAG_L
#undef FLAG_l
#undef FLAG_t
#endif

// netstat pWrxwutneal pWrxwutneal
#ifdef CLEANUP_netstat
#undef CLEANUP_netstat
#undef FOR_netstat
#undef FLAG_l
#undef FLAG_a
#undef FLAG_e
#undef FLAG_n
#undef FLAG_t
#undef FLAG_u
#undef FLAG_w
#undef FLAG_x
#undef FLAG_r
#undef FLAG_W
#undef FLAG_p
#endif

// nice ^<1n# ^<1n#
#ifdef CLEANUP_nice
#undef CLEANUP_nice
#undef FOR_nice
#undef FLAG_n
#endif

// nl v#<1=1l#b:n:s:w#<0=6E v#<1=1l#b:n:s:w#<0=6E
#ifdef CLEANUP_nl
#undef CLEANUP_nl
#undef FOR_nl
#undef FLAG_E
#undef FLAG_w
#undef FLAG_s
#undef FLAG_n
#undef FLAG_b
#undef FLAG_l
#undef FLAG_v
#endif

// nohup <1^ <1^
#ifdef CLEANUP_nohup
#undef CLEANUP_nohup
#undef FOR_nohup
#endif

// nsenter   <1F(no-fork)t#(target)i:(ipc);m:(mount);n:(net);p:(pid);u:(uts);U:(user);
#ifdef CLEANUP_nsenter
#undef CLEANUP_nsenter
#undef FOR_nsenter
#undef FLAG_user
#undef FLAG_U
#undef FLAG_uts
#undef FLAG_u
#undef FLAG_pid
#undef FLAG_p
#undef FLAG_net
#undef FLAG_n
#undef FLAG_mount
#undef FLAG_m
#undef FLAG_ipc
#undef FLAG_i
#undef FLAG_target
#undef FLAG_t
#undef FLAG_no_fork
#undef FLAG_F
#endif

// od j#vN#xsodcbA:t* j#vN#xsodcbA:t*
#ifdef CLEANUP_od
#undef CLEANUP_od
#undef FOR_od
#undef FLAG_t
#undef FLAG_A
#undef FLAG_b
#undef FLAG_c
#undef FLAG_d
#undef FLAG_o
#undef FLAG_s
#undef FLAG_x
#undef FLAG_N
#undef FLAG_v
#undef FLAG_j
#endif

// oneit   ^<1c:p
#ifdef CLEANUP_oneit
#undef CLEANUP_oneit
#undef FOR_oneit
#undef FLAG_p
#undef FLAG_c
#endif

// openvt   c#<1>63sw
#ifdef CLEANUP_openvt
#undef CLEANUP_openvt
#undef FOR_openvt
#undef FLAG_w
#undef FLAG_s
#undef FLAG_c
#endif

// partprobe <1 <1
#ifdef CLEANUP_partprobe
#undef CLEANUP_partprobe
#undef FOR_partprobe
#endif

// passwd   >1a:dlu
#ifdef CLEANUP_passwd
#undef CLEANUP_passwd
#undef FOR_passwd
#undef FLAG_u
#undef FLAG_l
#undef FLAG_d
#undef FLAG_a
#endif

// paste d:s d:s
#ifdef CLEANUP_paste
#undef CLEANUP_paste
#undef FOR_paste
#undef FLAG_s
#undef FLAG_d
#endif

// patch ulp#i:R xulp#i:R
#ifdef CLEANUP_patch
#undef CLEANUP_patch
#undef FOR_patch
#undef FLAG_R
#undef FLAG_i
#undef FLAG_p
#undef FLAG_l
#undef FLAG_u
#undef FLAG_x
#endif

// pgrep   ?P# s# xvonlf[!sP]
#ifdef CLEANUP_pgrep
#undef CLEANUP_pgrep
#undef FOR_pgrep
#undef FLAG_f
#undef FLAG_l
#undef FLAG_n
#undef FLAG_o
#undef FLAG_v
#undef FLAG_x
#undef FLAG_s
#undef FLAG_P
#endif

// pidof <1so: <1so:
#ifdef CLEANUP_pidof
#undef CLEANUP_pidof
#undef FOR_pidof
#undef FLAG_o
#undef FLAG_s
#endif

// ping   <1>1t#<0>255c#<0s#<0>65535I:W#<0w#<0q46[-46]
#ifdef CLEANUP_ping
#undef CLEANUP_ping
#undef FOR_ping
#undef FLAG_6
#undef FLAG_4
#undef FLAG_q
#undef FLAG_w
#undef FLAG_W
#undef FLAG_I
#undef FLAG_s
#undef FLAG_c
#undef FLAG_t
#endif

// pivot_root <2>2 <2>2
#ifdef CLEANUP_pivot_root
#undef CLEANUP_pivot_root
#undef FOR_pivot_root
#endif

// pmap <1xq <1xq
#ifdef CLEANUP_pmap
#undef CLEANUP_pmap
#undef FOR_pmap
#undef FLAG_q
#undef FLAG_x
#endif

// printenv 0(null) 0(null)
#ifdef CLEANUP_printenv
#undef CLEANUP_printenv
#undef FOR_printenv
#undef FLAG_null
#undef FLAG_0
#endif

// printf   <1
#ifdef CLEANUP_printf
#undef CLEANUP_printf
#undef FOR_printf
#endif

// ps >0o*T >0o*T
#ifdef CLEANUP_ps
#undef CLEANUP_ps
#undef FOR_ps
#undef FLAG_T
#undef FLAG_o
#endif

// pwd >0LP[-LP] >0LP[-LP]
#ifdef CLEANUP_pwd
#undef CLEANUP_pwd
#undef FOR_pwd
#undef FLAG_P
#undef FLAG_L
#endif

// pwdx <1a <1a
#ifdef CLEANUP_pwdx
#undef CLEANUP_pwdx
#undef FOR_pwdx
#undef FLAG_a
#endif

// readahead    
#ifdef CLEANUP_readahead
#undef CLEANUP_readahead
#undef FOR_readahead
#endif

// readlink <1>1fenq[-fe] <1>1fenq[-fe]
#ifdef CLEANUP_readlink
#undef CLEANUP_readlink
#undef FOR_readlink
#undef FLAG_q
#undef FLAG_n
#undef FLAG_e
#undef FLAG_f
#endif

// realpath <1 <1
#ifdef CLEANUP_realpath
#undef CLEANUP_realpath
#undef FOR_realpath
#endif

// reboot   n
#ifdef CLEANUP_reboot
#undef CLEANUP_reboot
#undef FOR_reboot
#undef FLAG_n
#endif

// renice <1gpun#| <1gpun#|
#ifdef CLEANUP_renice
#undef CLEANUP_renice
#undef FOR_renice
#undef FLAG_n
#undef FLAG_u
#undef FLAG_p
#undef FLAG_g
#endif

// reset    
#ifdef CLEANUP_reset
#undef CLEANUP_reset
#undef FOR_reset
#endif

// rev    
#ifdef CLEANUP_rev
#undef CLEANUP_rev
#undef FOR_rev
#endif

// rfkill <1>2 <1>2
#ifdef CLEANUP_rfkill
#undef CLEANUP_rfkill
#undef FOR_rfkill
#endif

// rm fiRr[-fi] fiRr[-fi]
#ifdef CLEANUP_rm
#undef CLEANUP_rm
#undef FOR_rm
#undef FLAG_r
#undef FLAG_R
#undef FLAG_i
#undef FLAG_f
#endif

// rmdir <1p <1p
#ifdef CLEANUP_rmdir
#undef CLEANUP_rmdir
#undef FOR_rmdir
#undef FLAG_p
#endif

// rmmod <1wf <1wf
#ifdef CLEANUP_rmmod
#undef CLEANUP_rmmod
#undef FOR_rmmod
#undef FLAG_f
#undef FLAG_w
#endif

// route ?neA: ?neA:
#ifdef CLEANUP_route
#undef CLEANUP_route
#undef FOR_route
#undef FLAG_A
#undef FLAG_e
#undef FLAG_n
#endif

// sed   (version)e*f*inr
#ifdef CLEANUP_sed
#undef CLEANUP_sed
#undef FOR_sed
#undef FLAG_r
#undef FLAG_n
#undef FLAG_i
#undef FLAG_f
#undef FLAG_e
#undef FLAG_version
#endif

// seq <1>3?f:s: <1>3?f:s:
#ifdef CLEANUP_seq
#undef CLEANUP_seq
#undef FOR_seq
#undef FLAG_s
#undef FLAG_f
#endif

// setsid ^<1t ^<1t
#ifdef CLEANUP_setsid
#undef CLEANUP_setsid
#undef FOR_setsid
#undef FLAG_t
#endif

// sh   c:i
#ifdef CLEANUP_sh
#undef CLEANUP_sh
#undef FOR_sh
#undef FLAG_i
#undef FLAG_c
#endif

// sha1sum b b
#ifdef CLEANUP_sha1sum
#undef CLEANUP_sha1sum
#undef FOR_sha1sum
#undef FLAG_b
#endif

// shred   <1zxus#<1n#<1o#<0f
#ifdef CLEANUP_shred
#undef CLEANUP_shred
#undef FOR_shred
#undef FLAG_f
#undef FLAG_o
#undef FLAG_n
#undef FLAG_s
#undef FLAG_u
#undef FLAG_x
#undef FLAG_z
#endif

// skeleton   (walrus)(blubber):;(also):e@d*c#b:a
#ifdef CLEANUP_skeleton
#undef CLEANUP_skeleton
#undef FOR_skeleton
#undef FLAG_a
#undef FLAG_b
#undef FLAG_c
#undef FLAG_d
#undef FLAG_e
#undef FLAG_also
#undef FLAG_blubber
#undef FLAG_walrus
#endif

// skeleton_alias   b#dq
#ifdef CLEANUP_skeleton_alias
#undef CLEANUP_skeleton_alias
#undef FOR_skeleton_alias
#undef FLAG_q
#undef FLAG_d
#undef FLAG_b
#endif

// sleep <1 <1
#ifdef CLEANUP_sleep
#undef CLEANUP_sleep
#undef FOR_sleep
#endif

// sort gS:T:mo:k*t:xbMcszdfirun gS:T:mo:k*t:xbMcszdfirun
#ifdef CLEANUP_sort
#undef CLEANUP_sort
#undef FOR_sort
#undef FLAG_n
#undef FLAG_u
#undef FLAG_r
#undef FLAG_i
#undef FLAG_f
#undef FLAG_d
#undef FLAG_z
#undef FLAG_s
#undef FLAG_c
#undef FLAG_M
#undef FLAG_b
#undef FLAG_x
#undef FLAG_t
#undef FLAG_k
#undef FLAG_o
#undef FLAG_m
#undef FLAG_T
#undef FLAG_S
#undef FLAG_g
#endif

// split >2a#<1=2>9b#<1l#<1 >2a#<1=2>9b#<1l#<1
#ifdef CLEANUP_split
#undef CLEANUP_split
#undef FOR_split
#undef FLAG_l
#undef FLAG_b
#undef FLAG_a
#endif

// stat c:f c:f
#ifdef CLEANUP_stat
#undef CLEANUP_stat
#undef FOR_stat
#undef FLAG_f
#undef FLAG_c
#endif

// strings an#=4<1fo an#=4<1fo
#ifdef CLEANUP_strings
#undef CLEANUP_strings
#undef FOR_strings
#undef FLAG_o
#undef FLAG_f
#undef FLAG_n
#undef FLAG_a
#endif

// su   lmpc:s:
#ifdef CLEANUP_su
#undef CLEANUP_su
#undef FOR_su
#undef FLAG_s
#undef FLAG_c
#undef FLAG_p
#undef FLAG_m
#undef FLAG_l
#endif

// sulogin   t#<0=0
#ifdef CLEANUP_sulogin
#undef CLEANUP_sulogin
#undef FOR_sulogin
#undef FLAG_t
#endif

// swapoff <1>1 <1>1
#ifdef CLEANUP_swapoff
#undef CLEANUP_swapoff
#undef FOR_swapoff
#endif

// swapon <1>1p#<0>32767 <1>1p#<0>32767
#ifdef CLEANUP_swapon
#undef CLEANUP_swapon
#undef FOR_swapon
#undef FLAG_p
#endif

// switch_root <2c:h <2c:h
#ifdef CLEANUP_switch_root
#undef CLEANUP_switch_root
#undef FOR_switch_root
#undef FLAG_h
#undef FLAG_c
#endif

// sync    
#ifdef CLEANUP_sync
#undef CLEANUP_sync
#undef FOR_sync
#endif

// sysctl ^neNqwpaA[!ap][!aq][!aw][+aA] ^neNqwpaA[!ap][!aq][!aw][+aA]
#ifdef CLEANUP_sysctl
#undef CLEANUP_sysctl
#undef FOR_sysctl
#undef FLAG_A
#undef FLAG_a
#undef FLAG_p
#undef FLAG_w
#undef FLAG_q
#undef FLAG_N
#undef FLAG_e
#undef FLAG_n
#endif

// syslogd   >0l#<1>8=8R:b#<0>99=1s#<0=200m#<0>71582787=20O:p:f:a:nSKLD
#ifdef CLEANUP_syslogd
#undef CLEANUP_syslogd
#undef FOR_syslogd
#undef FLAG_D
#undef FLAG_L
#undef FLAG_K
#undef FLAG_S
#undef FLAG_n
#undef FLAG_a
#undef FLAG_f
#undef FLAG_p
#undef FLAG_O
#undef FLAG_m
#undef FLAG_s
#undef FLAG_b
#undef FLAG_R
#undef FLAG_l
#endif

// tac    
#ifdef CLEANUP_tac
#undef CLEANUP_tac
#undef FOR_tac
#endif

// tail fc-n-[-cn] fc-n-[-cn]
#ifdef CLEANUP_tail
#undef CLEANUP_tail
#undef FOR_tail
#undef FLAG_n
#undef FLAG_c
#undef FLAG_f
#endif

// tar   &(no-recursion)(numeric-owner)(no-same-permissions)(overwrite)(exclude)*(to-command):o(no-same-owner)p(same-permissions)k(keep-old)c(create)|h(dereference)x(extract)|t(list)|v(verbose)z(gzip)O(to-stdout)m(touch)X(exclude-from)*T(files-from)*C(directory):f(file):[!txc]
#ifdef CLEANUP_tar
#undef CLEANUP_tar
#undef FOR_tar
#undef FLAG_file
#undef FLAG_f
#undef FLAG_directory
#undef FLAG_C
#undef FLAG_files_from
#undef FLAG_T
#undef FLAG_exclude_from
#undef FLAG_X
#undef FLAG_touch
#undef FLAG_m
#undef FLAG_to_stdout
#undef FLAG_O
#undef FLAG_gzip
#undef FLAG_z
#undef FLAG_verbose
#undef FLAG_v
#undef FLAG_list
#undef FLAG_t
#undef FLAG_extract
#undef FLAG_x
#undef FLAG_dereference
#undef FLAG_h
#undef FLAG_create
#undef FLAG_c
#undef FLAG_keep_old
#undef FLAG_k
#undef FLAG_same_permissions
#undef FLAG_p
#undef FLAG_no_same_owner
#undef FLAG_o
#undef FLAG_to_command
#undef FLAG_exclude
#undef FLAG_overwrite
#undef FLAG_no_same_permissions
#undef FLAG_numeric_owner
#undef FLAG_no_recursion
#endif

// taskset <1^pa <1^pa
#ifdef CLEANUP_taskset
#undef CLEANUP_taskset
#undef FOR_taskset
#undef FLAG_a
#undef FLAG_p
#endif

// tcpsvd   ^<3c#=30<1C:b#=20<0u:l:hEv
#ifdef CLEANUP_tcpsvd
#undef CLEANUP_tcpsvd
#undef FOR_tcpsvd
#undef FLAG_v
#undef FLAG_E
#undef FLAG_h
#undef FLAG_l
#undef FLAG_u
#undef FLAG_b
#undef FLAG_C
#undef FLAG_c
#endif

// tee ia ia
#ifdef CLEANUP_tee
#undef CLEANUP_tee
#undef FOR_tee
#undef FLAG_a
#undef FLAG_i
#endif

// telnet   <1>2
#ifdef CLEANUP_telnet
#undef CLEANUP_telnet
#undef FOR_telnet
#endif

// telnetd   w#<0b:p#<0>65535=23f:l:FSKi[!wi]
#ifdef CLEANUP_telnetd
#undef CLEANUP_telnetd
#undef FOR_telnetd
#undef FLAG_i
#undef FLAG_K
#undef FLAG_S
#undef FLAG_F
#undef FLAG_l
#undef FLAG_f
#undef FLAG_p
#undef FLAG_b
#undef FLAG_w
#endif

// test    
#ifdef CLEANUP_test
#undef CLEANUP_test
#undef FOR_test
#endif

// tftpd   rcu:l
#ifdef CLEANUP_tftpd
#undef CLEANUP_tftpd
#undef FOR_tftpd
#undef FLAG_l
#undef FLAG_u
#undef FLAG_c
#undef FLAG_r
#endif

// time <1^p <1^p
#ifdef CLEANUP_time
#undef CLEANUP_time
#undef FOR_time
#undef FLAG_p
#endif

// timeout <2^k:s:  <2^k:s: 
#ifdef CLEANUP_timeout
#undef CLEANUP_timeout
#undef FOR_timeout
#undef FLAG_s
#undef FLAG_k
#endif

// top >0d#=3n#<1mb >0d#=3n#<1mb
#ifdef CLEANUP_top
#undef CLEANUP_top
#undef FOR_top
#undef FLAG_b
#undef FLAG_m
#undef FLAG_n
#undef FLAG_d
#endif

// touch acd:mr:t:[!dtr] acd:mr:t:[!dtr]
#ifdef CLEANUP_touch
#undef CLEANUP_touch
#undef FOR_touch
#undef FLAG_t
#undef FLAG_r
#undef FLAG_m
#undef FLAG_d
#undef FLAG_c
#undef FLAG_a
#endif

// toybox    
#ifdef CLEANUP_toybox
#undef CLEANUP_toybox
#undef FOR_toybox
#endif

// tr   ^>2<1Ccsd[+cC]
#ifdef CLEANUP_tr
#undef CLEANUP_tr
#undef FOR_tr
#undef FLAG_d
#undef FLAG_s
#undef FLAG_c
#undef FLAG_C
#endif

// traceroute <1>2i:f#<1>255=1z#<0>86400=0g*w#<0>86400=5t#<0>255=0s:q#<1>255=3p#<1>65535=33434m#<1>255=30rvndlIUF64 <1>2i:f#<1>255=1z#<0>86400=0g*w#<0>86400=5t#<0>255=0s:q#<1>255=3p#<1>65535=33434m#<1>255=30rvndlIUF64
#ifdef CLEANUP_traceroute
#undef CLEANUP_traceroute
#undef FOR_traceroute
#undef FLAG_4
#undef FLAG_6
#undef FLAG_F
#undef FLAG_U
#undef FLAG_I
#undef FLAG_l
#undef FLAG_d
#undef FLAG_n
#undef FLAG_v
#undef FLAG_r
#undef FLAG_m
#undef FLAG_p
#undef FLAG_q
#undef FLAG_s
#undef FLAG_t
#undef FLAG_w
#undef FLAG_g
#undef FLAG_z
#undef FLAG_f
#undef FLAG_i
#endif

// true    
#ifdef CLEANUP_true
#undef CLEANUP_true
#undef FOR_true
#endif

// truncate <1s#|c <1s#|c
#ifdef CLEANUP_truncate
#undef CLEANUP_truncate
#undef FOR_truncate
#undef FLAG_c
#undef FLAG_s
#endif

// tty s s
#ifdef CLEANUP_tty
#undef CLEANUP_tty
#undef FOR_tty
#undef FLAG_s
#endif

// umount ndDflrat*v[!na] ndDflrat*v[!na]
#ifdef CLEANUP_umount
#undef CLEANUP_umount
#undef FOR_umount
#undef FLAG_v
#undef FLAG_t
#undef FLAG_a
#undef FLAG_r
#undef FLAG_l
#undef FLAG_f
#undef FLAG_D
#undef FLAG_d
#undef FLAG_n
#endif

// uname oamvrns[+os] oamvrns[+os]
#ifdef CLEANUP_uname
#undef CLEANUP_uname
#undef FOR_uname
#undef FLAG_s
#undef FLAG_n
#undef FLAG_r
#undef FLAG_v
#undef FLAG_m
#undef FLAG_a
#undef FLAG_o
#endif

// uniq f#s#w#zicdu f#s#w#zicdu
#ifdef CLEANUP_uniq
#undef CLEANUP_uniq
#undef FOR_uniq
#undef FLAG_u
#undef FLAG_d
#undef FLAG_c
#undef FLAG_i
#undef FLAG_z
#undef FLAG_w
#undef FLAG_s
#undef FLAG_f
#endif

// unlink   <1>1
#ifdef CLEANUP_unlink
#undef CLEANUP_unlink
#undef FOR_unlink
#endif

// unshare <1^imnpuU <1^imnpuU
#ifdef CLEANUP_unshare
#undef CLEANUP_unshare
#undef FOR_unshare
#undef FLAG_U
#undef FLAG_u
#undef FLAG_p
#undef FLAG_n
#undef FLAG_m
#undef FLAG_i
#endif

// uptime    
#ifdef CLEANUP_uptime
#undef CLEANUP_uptime
#undef FOR_uptime
#endif

// useradd   <1>2u#<0G:s:g:h:SDH
#ifdef CLEANUP_useradd
#undef CLEANUP_useradd
#undef FOR_useradd
#undef FLAG_H
#undef FLAG_D
#undef FLAG_S
#undef FLAG_h
#undef FLAG_g
#undef FLAG_s
#undef FLAG_G
#undef FLAG_u
#endif

// userdel   <1>1r
#ifdef CLEANUP_userdel
#undef CLEANUP_userdel
#undef FOR_userdel
#undef FLAG_r
#endif

// usleep <1 <1
#ifdef CLEANUP_usleep
#undef CLEANUP_usleep
#undef FOR_usleep
#endif

// uudecode >1o: >1o:
#ifdef CLEANUP_uudecode
#undef CLEANUP_uudecode
#undef FOR_uudecode
#undef FLAG_o
#endif

// uuencode <1>2m <1>2m
#ifdef CLEANUP_uuencode
#undef CLEANUP_uuencode
#undef FOR_uuencode
#undef FLAG_m
#endif

// vconfig <2>4 <2>4
#ifdef CLEANUP_vconfig
#undef CLEANUP_vconfig
#undef FOR_vconfig
#endif

// vmstat >2n >2n
#ifdef CLEANUP_vmstat
#undef CLEANUP_vmstat
#undef FOR_vmstat
#undef FLAG_n
#endif

// w    
#ifdef CLEANUP_w
#undef CLEANUP_w
#undef FOR_w
#endif

// watch   ^<1n#<0=2te
#ifdef CLEANUP_watch
#undef CLEANUP_watch
#undef FOR_watch
#undef FLAG_e
#undef FLAG_t
#undef FLAG_n
#endif

// wc mcwl mcwl
#ifdef CLEANUP_wc
#undef CLEANUP_wc
#undef FOR_wc
#undef FLAG_l
#undef FLAG_w
#undef FLAG_c
#undef FLAG_m
#endif

// which <1a <1a
#ifdef CLEANUP_which
#undef CLEANUP_which
#undef FOR_which
#undef FLAG_a
#endif

// who   a
#ifdef CLEANUP_who
#undef CLEANUP_who
#undef FOR_who
#undef FLAG_a
#endif

// xargs ^I:E:L#ptxrn#<1s#0 ^I:E:L#ptxrn#<1s#0
#ifdef CLEANUP_xargs
#undef CLEANUP_xargs
#undef FOR_xargs
#undef FLAG_0
#undef FLAG_s
#undef FLAG_n
#undef FLAG_r
#undef FLAG_x
#undef FLAG_t
#undef FLAG_p
#undef FLAG_L
#undef FLAG_E
#undef FLAG_I
#endif

// xzcat    
#ifdef CLEANUP_xzcat
#undef CLEANUP_xzcat
#undef FOR_xzcat
#endif

// yes    
#ifdef CLEANUP_yes
#undef CLEANUP_yes
#undef FOR_yes
#endif

// zcat    
#ifdef CLEANUP_zcat
#undef CLEANUP_zcat
#undef FOR_zcat
#endif

#ifdef FOR_acpi
#ifndef TT
#define TT this.acpi
#endif
#define FLAG_V (1<<0)
#define FLAG_t (1<<1)
#define FLAG_c (1<<2)
#define FLAG_b (1<<3)
#define FLAG_a (1<<4)
#endif

#ifdef FOR_arp
#ifndef TT
#define TT this.arp
#endif
#define FLAG_H 0
#define FLAG_A 0
#define FLAG_p 0
#define FLAG_a 0
#define FLAG_d 0
#define FLAG_s 0
#define FLAG_D 0
#define FLAG_n 0
#define FLAG_i 0
#define FLAG_v 0
#endif

#ifdef FOR_arping
#ifndef TT
#define TT this.arping
#endif
#define FLAG_f 0
#define FLAG_q 0
#define FLAG_b 0
#define FLAG_D 0
#define FLAG_U 0
#define FLAG_A 0
#define FLAG_c 0
#define FLAG_w 0
#define FLAG_I 0
#define FLAG_s 0
#endif

#ifdef FOR_base64
#ifndef TT
#define TT this.base64
#endif
#define FLAG_w (1<<0)
#define FLAG_i (1<<1)
#define FLAG_d (1<<2)
#endif

#ifdef FOR_basename
#ifndef TT
#define TT this.basename
#endif
#endif

#ifdef FOR_blkid
#ifndef TT
#define TT this.blkid
#endif
#endif

#ifdef FOR_blockdev
#ifndef TT
#define TT this.blockdev
#endif
#define FLAG_rereadpt (1<<0)
#define FLAG_flushbufs (1<<1)
#define FLAG_getsize64 (1<<2)
#define FLAG_getsize (1<<3)
#define FLAG_getsz (1<<4)
#define FLAG_setbsz (1<<5)
#define FLAG_getbsz (1<<6)
#define FLAG_getss (1<<7)
#define FLAG_getro (1<<8)
#define FLAG_setrw (1<<9)
#define FLAG_setro (1<<10)
#endif

#ifdef FOR_bootchartd
#ifndef TT
#define TT this.bootchartd
#endif
#endif

#ifdef FOR_brctl
#ifndef TT
#define TT this.brctl
#endif
#endif

#ifdef FOR_bzcat
#ifndef TT
#define TT this.bzcat
#endif
#endif

#ifdef FOR_cal
#ifndef TT
#define TT this.cal
#endif
#endif

#ifdef FOR_cat
#ifndef TT
#define TT this.cat
#endif
#define FLAG_u (1<<0)
#endif

#ifdef FOR_catv
#ifndef TT
#define TT this.catv
#endif
#define FLAG_e (1<<0)
#define FLAG_t (1<<1)
#define FLAG_v (1<<2)
#endif

#ifdef FOR_cd
#ifndef TT
#define TT this.cd
#endif
#endif

#ifdef FOR_chattr
#ifndef TT
#define TT this.chattr
#endif
#endif

#ifdef FOR_chcon
#ifndef TT
#define TT this.chcon
#endif
#define FLAG_v (1<<0)
#define FLAG_R (1<<1)
#define FLAG_h (1<<2)
#endif

#ifdef FOR_chgrp
#ifndef TT
#define TT this.chgrp
#endif
#define FLAG_v (1<<0)
#define FLAG_f (1<<1)
#define FLAG_R (1<<2)
#define FLAG_H (1<<3)
#define FLAG_L (1<<4)
#define FLAG_P (1<<5)
#define FLAG_h (1<<6)
#endif

#ifdef FOR_chmod
#ifndef TT
#define TT this.chmod
#endif
#define FLAG_f (1<<0)
#define FLAG_R (1<<1)
#define FLAG_v (1<<2)
#endif

#ifdef FOR_chroot
#ifndef TT
#define TT this.chroot
#endif
#endif

#ifdef FOR_chvt
#ifndef TT
#define TT this.chvt
#endif
#endif

#ifdef FOR_cksum
#ifndef TT
#define TT this.cksum
#endif
#define FLAG_N (1<<0)
#define FLAG_L (1<<1)
#define FLAG_P (1<<2)
#define FLAG_I (1<<3)
#define FLAG_H (1<<4)
#endif

#ifdef FOR_clear
#ifndef TT
#define TT this.clear
#endif
#endif

#ifdef FOR_cmp
#ifndef TT
#define TT this.cmp
#endif
#define FLAG_s (1<<0)
#define FLAG_l (1<<1)
#endif

#ifdef FOR_comm
#ifndef TT
#define TT this.comm
#endif
#define FLAG_1 (1<<0)
#define FLAG_2 (1<<1)
#define FLAG_3 (1<<2)
#endif

#ifdef FOR_compress
#ifndef TT
#define TT this.compress
#endif
#define FLAG_g 0
#define FLAG_r 0
#define FLAG_l 0
#define FLAG_9 0
#define FLAG_d 0
#define FLAG_c 0
#define FLAG_z 0
#endif

#ifdef FOR_count
#ifndef TT
#define TT this.count
#endif
#endif

#ifdef FOR_cp
#ifndef TT
#define TT this.cp
#endif
#define FLAG_i (1<<0)
#define FLAG_f (1<<1)
#define FLAG_F (1<<2)
#define FLAG_n (1<<3)
#define FLAG_v (1<<4)
#define FLAG_l (1<<5)
#define FLAG_s (1<<6)
#define FLAG_a (1<<7)
#define FLAG_d (1<<8)
#define FLAG_r (1<<9)
#define FLAG_p (1<<10)
#define FLAG_P (1<<11)
#define FLAG_L (1<<12)
#define FLAG_H (1<<13)
#define FLAG_R (1<<14)
#endif

#ifdef FOR_cpio
#ifndef TT
#define TT this.cpio
#endif
#define FLAG_o 0
#define FLAG_verbose 0
#define FLAG_v 0
#define FLAG_F 0
#define FLAG_t 0
#define FLAG_i 0
#define FLAG_p 0
#define FLAG_H 0
#define FLAG_u 0
#define FLAG_d 0
#define FLAG_m 0
#endif

#ifdef FOR_crond
#ifndef TT
#define TT this.crond
#endif
#define FLAG_c 0
#define FLAG_L 0
#define FLAG_d 0
#define FLAG_l 0
#define FLAG_S 0
#define FLAG_b 0
#define FLAG_f 0
#endif

#ifdef FOR_crontab
#ifndef TT
#define TT this.crontab
#endif
#define FLAG_r 0
#define FLAG_l 0
#define FLAG_e 0
#define FLAG_u 0
#define FLAG_c 0
#endif

#ifdef FOR_cut
#ifndef TT
#define TT this.cut
#endif
#define FLAG_n (1<<0)
#define FLAG_s (1<<1)
#define FLAG_d (1<<2)
#define FLAG_f (1<<3)
#define FLAG_c (1<<4)
#define FLAG_b (1<<5)
#endif

#ifdef FOR_date
#ifndef TT
#define TT this.date
#endif
#define FLAG_u (1<<0)
#define FLAG_r (1<<1)
#define FLAG_s (1<<2)
#define FLAG_d (1<<3)
#endif

#ifdef FOR_dd
#ifndef TT
#define TT this.dd
#endif
#endif

#ifdef FOR_deallocvt
#ifndef TT
#define TT this.deallocvt
#endif
#endif

#ifdef FOR_df
#ifndef TT
#define TT this.df
#endif
#define FLAG_a (1<<0)
#define FLAG_t (1<<1)
#define FLAG_k (1<<2)
#define FLAG_P (1<<3)
#endif

#ifdef FOR_dhcp
#ifndef TT
#define TT this.dhcp
#endif
#define FLAG_f 0
#define FLAG_b 0
#define FLAG_n 0
#define FLAG_q 0
#define FLAG_v 0
#define FLAG_o 0
#define FLAG_a 0
#define FLAG_C 0
#define FLAG_R 0
#define FLAG_B 0
#define FLAG_S 0
#define FLAG_i 0
#define FLAG_p 0
#define FLAG_s 0
#define FLAG_t 0
#define FLAG_T 0
#define FLAG_A 0
#define FLAG_O 0
#define FLAG_r 0
#define FLAG_x 0
#define FLAG_F 0
#define FLAG_H 0
#define FLAG_V 0
#endif

#ifdef FOR_dhcpd
#ifndef TT
#define TT this.dhcpd
#endif
#define FLAG_S 0
#define FLAG_f 0
#define FLAG_P 0
#endif

#ifdef FOR_diff
#ifndef TT
#define TT this.diff
#endif
#define FLAG_unified 0
#define FLAG_U 0
#define FLAG_recursive 0
#define FLAG_r 0
#define FLAG_new_file 0
#define FLAG_N 0
#define FLAG_starting_file 0
#define FLAG_S 0
#define FLAG_label 0
#define FLAG_L 0
#define FLAG_text 0
#define FLAG_a 0
#define FLAG_brief 0
#define FLAG_q 0
#define FLAG_report_identical_files 0
#define FLAG_s 0
#define FLAG_initial_tab 0
#define FLAG_T 0
#define FLAG_ignore_case 0
#define FLAG_i 0
#define FLAG_ignore_all_space 0
#define FLAG_w 0
#define FLAG_expand_tabs 0
#define FLAG_t 0
#define FLAG_u 0
#define FLAG_ignore_space_change 0
#define FLAG_b 0
#define FLAG_minimal 0
#define FLAG_d 0
#define FLAG_ignore_blank_lines 0
#define FLAG_B 0
#endif

#ifdef FOR_dirname
#ifndef TT
#define TT this.dirname
#endif
#endif

#ifdef FOR_dmesg
#ifndef TT
#define TT this.dmesg
#endif
#define FLAG_c (1<<0)
#define FLAG_n (1<<1)
#define FLAG_s (1<<2)
#define FLAG_r (1<<3)
#endif

#ifdef FOR_dos2unix
#ifndef TT
#define TT this.dos2unix
#endif
#endif

#ifdef FOR_du
#ifndef TT
#define TT this.du
#endif
#define FLAG_x (1<<0)
#define FLAG_s (1<<1)
#define FLAG_L (1<<2)
#define FLAG_K (1<<3)
#define FLAG_k (1<<4)
#define FLAG_H (1<<5)
#define FLAG_a (1<<6)
#define FLAG_c (1<<7)
#define FLAG_l (1<<8)
#define FLAG_m (1<<9)
#define FLAG_h (1<<10)
#define FLAG_d (1<<11)
#endif

#ifdef FOR_dumpleases
#ifndef TT
#define TT this.dumpleases
#endif
#define FLAG_f 0
#define FLAG_r 0
#define FLAG_a 0
#endif

#ifdef FOR_echo
#ifndef TT
#define TT this.echo
#endif
#define FLAG_n (1<<0)
#define FLAG_e (1<<1)
#endif

#ifdef FOR_eject
#ifndef TT
#define TT this.eject
#endif
#define FLAG_T 0
#define FLAG_t 0
#define FLAG_s 0
#endif

#ifdef FOR_env
#ifndef TT
#define TT this.env
#endif
#define FLAG_i (1<<0)
#endif

#ifdef FOR_exit
#ifndef TT
#define TT this.exit
#endif
#endif

#ifdef FOR_expand
#ifndef TT
#define TT this.expand
#endif
#define FLAG_t (1<<0)
#endif

#ifdef FOR_expr
#ifndef TT
#define TT this.expr
#endif
#endif

#ifdef FOR_factor
#ifndef TT
#define TT this.factor
#endif
#endif

#ifdef FOR_fallocate
#ifndef TT
#define TT this.fallocate
#endif
#define FLAG_l (1<<0)
#endif

#ifdef FOR_false
#ifndef TT
#define TT this.false
#endif
#endif

#ifdef FOR_fdisk
#ifndef TT
#define TT this.fdisk
#endif
#define FLAG_l 0
#define FLAG_u 0
#define FLAG_b 0
#define FLAG_S 0
#define FLAG_H 0
#define FLAG_C 0
#endif

#ifdef FOR_find
#ifndef TT
#define TT this.find
#endif
#define FLAG_L (1<<0)
#define FLAG_H (1<<1)
#endif

#ifdef FOR_fold
#ifndef TT
#define TT this.fold
#endif
#define FLAG_w 0
#define FLAG_u 0
#define FLAG_s 0
#define FLAG_b 0
#endif

#ifdef FOR_free
#ifndef TT
#define TT this.free
#endif
#define FLAG_b (1<<0)
#define FLAG_k (1<<1)
#define FLAG_m (1<<2)
#define FLAG_g (1<<3)
#define FLAG_t (1<<4)
#endif

#ifdef FOR_freeramdisk
#ifndef TT
#define TT this.freeramdisk
#endif
#endif

#ifdef FOR_fsck
#ifndef TT
#define TT this.fsck
#endif
#define FLAG_C 0
#define FLAG_s 0
#define FLAG_V 0
#define FLAG_T 0
#define FLAG_R 0
#define FLAG_P 0
#define FLAG_N 0
#define FLAG_A 0
#define FLAG_t 0
#endif

#ifdef FOR_fsfreeze
#ifndef TT
#define TT this.fsfreeze
#endif
#define FLAG_u (1<<0)
#define FLAG_f (1<<1)
#endif

#ifdef FOR_fstype
#ifndef TT
#define TT this.fstype
#endif
#endif

#ifdef FOR_ftpget
#ifndef TT
#define TT this.ftpget
#endif
#define FLAG_P 0
#define FLAG_p 0
#define FLAG_u 0
#define FLAG_v 0
#define FLAG_c 0
#endif

#ifdef FOR_getty
#ifndef TT
#define TT this.getty
#endif
#define FLAG_h 0
#define FLAG_L 0
#define FLAG_m 0
#define FLAG_n 0
#define FLAG_w 0
#define FLAG_i 0
#define FLAG_f 0
#define FLAG_l 0
#define FLAG_I 0
#define FLAG_H 0
#define FLAG_t 0
#endif

#ifdef FOR_grep
#ifndef TT
#define TT this.grep
#endif
#define FLAG_x (1<<0)
#define FLAG_m (1<<1)
#define FLAG_f (1<<2)
#define FLAG_e (1<<3)
#define FLAG_q (1<<4)
#define FLAG_l (1<<5)
#define FLAG_c (1<<6)
#define FLAG_w (1<<7)
#define FLAG_v (1<<8)
#define FLAG_s (1<<9)
#define FLAG_r (1<<10)
#define FLAG_o (1<<11)
#define FLAG_n (1<<12)
#define FLAG_i (1<<13)
#define FLAG_h (1<<14)
#define FLAG_b (1<<15)
#define FLAG_a (1<<16)
#define FLAG_H (1<<17)
#define FLAG_F (1<<18)
#define FLAG_E (1<<19)
#define FLAG_z (1<<20)
#define FLAG_Z (1<<21)
#endif

#ifdef FOR_groupadd
#ifndef TT
#define TT this.groupadd
#endif
#define FLAG_S 0
#define FLAG_g 0
#endif

#ifdef FOR_groupdel
#ifndef TT
#define TT this.groupdel
#endif
#endif

#ifdef FOR_gunzip
#ifndef TT
#define TT this.gunzip
#endif
#define FLAG_v 0
#define FLAG_t 0
#define FLAG_S 0
#define FLAG_q 0
#define FLAG_l 0
#define FLAG_f 0
#define FLAG_c 0
#endif

#ifdef FOR_gzip
#ifndef TT
#define TT this.gzip
#endif
#define FLAG_z 0
#define FLAG_R 0
#define FLAG_L 0
#define FLAG_g 0
#define FLAG_v 0
#define FLAG_t 0
#define FLAG_S 0
#define FLAG_q 0
#define FLAG_l 0
#define FLAG_f 0
#define FLAG_c 0
#define FLAG_d 0
#define FLAG_9 0
#define FLAG_1 0
#define FLAG_d 0
#endif

#ifdef FOR_head
#ifndef TT
#define TT this.head
#endif
#define FLAG_n (1<<0)
#endif

#ifdef FOR_hello
#ifndef TT
#define TT this.hello
#endif
#endif

#ifdef FOR_help
#ifndef TT
#define TT this.help
#endif
#define FLAG_h (1<<0)
#define FLAG_a (1<<1)
#endif

#ifdef FOR_host
#ifndef TT
#define TT this.host
#endif
#define FLAG_t 0
#define FLAG_v 0
#define FLAG_a 0
#endif

#ifdef FOR_hostname
#ifndef TT
#define TT this.hostname
#endif
#endif

#ifdef FOR_hwclock
#ifndef TT
#define TT this.hwclock
#endif
#define FLAG_show 0
#define FLAG_r 0
#define FLAG_hctosys 0
#define FLAG_s 0
#define FLAG_systohc 0
#define FLAG_w 0
#define FLAG_systz 0
#define FLAG_t 0
#define FLAG_localtime 0
#define FLAG_l 0
#define FLAG_utc 0
#define FLAG_u 0
#define FLAG_rtc 0
#define FLAG_f 0
#define FLAG_fast 0
#endif

#ifdef FOR_iconv
#ifndef TT
#define TT this.iconv
#endif
#define FLAG_f 0
#define FLAG_t 0
#define FLAG_s 0
#define FLAG_c 0
#endif

#ifdef FOR_id
#ifndef TT
#define TT this.id
#endif
#define FLAG_u (1<<0)
#define FLAG_r (1<<1)
#define FLAG_g (1<<2)
#define FLAG_G (1<<3)
#define FLAG_n (1<<4)
#endif

#ifdef FOR_ifconfig
#ifndef TT
#define TT this.ifconfig
#endif
#define FLAG_a (1<<0)
#endif

#ifdef FOR_init
#ifndef TT
#define TT this.init
#endif
#endif

#ifdef FOR_inotifyd
#ifndef TT
#define TT this.inotifyd
#endif
#endif

#ifdef FOR_insmod
#ifndef TT
#define TT this.insmod
#endif
#endif

#ifdef FOR_install
#ifndef TT
#define TT this.install
#endif
#define FLAG_g (1<<0)
#define FLAG_o (1<<1)
#define FLAG_m (1<<2)
#define FLAG_v (1<<3)
#define FLAG_s (1<<4)
#define FLAG_p (1<<5)
#define FLAG_D (1<<6)
#define FLAG_d (1<<7)
#define FLAG_c (1<<8)
#endif

#ifdef FOR_ip
#ifndef TT
#define TT this.ip
#endif
#endif

#ifdef FOR_ipcrm
#ifndef TT
#define TT this.ipcrm
#endif
#define FLAG_Q 0
#define FLAG_q 0
#define FLAG_S 0
#define FLAG_s 0
#define FLAG_M 0
#define FLAG_m 0
#endif

#ifdef FOR_ipcs
#ifndef TT
#define TT this.ipcs
#endif
#define FLAG_i 0
#define FLAG_m 0
#define FLAG_q 0
#define FLAG_s 0
#define FLAG_l 0
#define FLAG_u 0
#define FLAG_t 0
#define FLAG_p 0
#define FLAG_c 0
#define FLAG_a 0
#endif

#ifdef FOR_kill
#ifndef TT
#define TT this.kill
#endif
#define FLAG_s (1<<0)
#define FLAG_l (1<<1)
#endif

#ifdef FOR_killall
#ifndef TT
#define TT this.killall
#endif
#define FLAG_i (1<<0)
#define FLAG_v (1<<1)
#define FLAG_q (1<<2)
#define FLAG_l (1<<3)
#define FLAG_s (1<<4)
#endif

#ifdef FOR_killall5
#ifndef TT
#define TT this.killall5
#endif
#define FLAG_s 0
#define FLAG_l 0
#define FLAG_o 0
#endif

#ifdef FOR_klogd
#ifndef TT
#define TT this.klogd
#endif
#define FLAG_n 0
#define FLAG_c 0
#endif

#ifdef FOR_last
#ifndef TT
#define TT this.last
#endif
#define FLAG_W 0
#define FLAG_f 0
#endif

#ifdef FOR_link
#ifndef TT
#define TT this.link
#endif
#endif

#ifdef FOR_ln
#ifndef TT
#define TT this.ln
#endif
#define FLAG_s (1<<0)
#define FLAG_f (1<<1)
#define FLAG_n (1<<2)
#define FLAG_v (1<<3)
#endif

#ifdef FOR_logger
#ifndef TT
#define TT this.logger
#endif
#define FLAG_p 0
#define FLAG_t 0
#define FLAG_s 0
#endif

#ifdef FOR_login
#ifndef TT
#define TT this.login
#endif
#define FLAG_h 0
#define FLAG_p 0
#define FLAG_f 0
#endif

#ifdef FOR_losetup
#ifndef TT
#define TT this.losetup
#endif
#define FLAG_a (1<<0)
#define FLAG_c (1<<1)
#define FLAG_d (1<<2)
#define FLAG_f (1<<3)
#define FLAG_j (1<<4)
#define FLAG_o (1<<5)
#define FLAG_r (1<<6)
#define FLAG_show (1<<7)
#define FLAG_s (1<<7)
#define FLAG_sizelimit (1<<8)
#define FLAG_S (1<<8)
#endif

#ifdef FOR_ls
#ifndef TT
#define TT this.ls
#endif
#define FLAG_1 (1<<0)
#define FLAG_x (1<<1)
#define FLAG_u (1<<2)
#define FLAG_t (1<<3)
#define FLAG_s (1<<4)
#define FLAG_r (1<<5)
#define FLAG_q (1<<6)
#define FLAG_p (1<<7)
#define FLAG_n (1<<8)
#define FLAG_m (1<<9)
#define FLAG_l (1<<10)
#define FLAG_k (1<<11)
#define FLAG_i (1<<12)
#define FLAG_f (1<<13)
#define FLAG_d (1<<14)
#define FLAG_c (1<<15)
#define FLAG_a (1<<16)
#define FLAG_S (1<<17)
#define FLAG_R (1<<18)
#define FLAG_L (1<<19)
#define FLAG_H (1<<20)
#define FLAG_F (1<<21)
#define FLAG_C (1<<22)
#define FLAG_A (1<<23)
#define FLAG_o (1<<24)
#define FLAG_g (1<<25)
#define FLAG_color (1<<26)
#endif

#ifdef FOR_lsattr
#ifndef TT
#define TT this.lsattr
#endif
#define FLAG_R (1<<0)
#define FLAG_a (1<<1)
#define FLAG_d (1<<2)
#define FLAG_l (1<<3)
#define FLAG_v (1<<4)
#endif

#ifdef FOR_lsmod
#ifndef TT
#define TT this.lsmod
#endif
#endif

#ifdef FOR_lspci
#ifndef TT
#define TT this.lspci
#endif
#define FLAG_i (1<<0)
#define FLAG_n (1<<1)
#define FLAG_k (1<<2)
#define FLAG_m (1<<3)
#define FLAG_e (1<<4)
#endif

#ifdef FOR_lsusb
#ifndef TT
#define TT this.lsusb
#endif
#endif

#ifdef FOR_makedevs
#ifndef TT
#define TT this.makedevs
#endif
#define FLAG_d (1<<0)
#endif

#ifdef FOR_md5sum
#ifndef TT
#define TT this.md5sum
#endif
#define FLAG_b (1<<0)
#endif

#ifdef FOR_mdev
#ifndef TT
#define TT this.mdev
#endif
#define FLAG_s 0
#endif

#ifdef FOR_mix
#ifndef TT
#define TT this.mix
#endif
#define FLAG_r 0
#define FLAG_l 0
#define FLAG_d 0
#define FLAG_m 0
#endif

#ifdef FOR_mkdir
#ifndef TT
#define TT this.mkdir
#endif
#define FLAG_m (1<<0)
#define FLAG_p (1<<1)
#define FLAG_v (1<<2)
#endif

#ifdef FOR_mke2fs
#ifndef TT
#define TT this.mke2fs
#endif
#define FLAG_b 0
#define FLAG_i 0
#define FLAG_N 0
#define FLAG_m 0
#define FLAG_q 0
#define FLAG_n 0
#define FLAG_F 0
#define FLAG_g 0
#endif

#ifdef FOR_mkfifo
#ifndef TT
#define TT this.mkfifo
#endif
#define FLAG_m (1<<0)
#endif

#ifdef FOR_mknod
#ifndef TT
#define TT this.mknod
#endif
#endif

#ifdef FOR_mkpasswd
#ifndef TT
#define TT this.mkpasswd
#endif
#define FLAG_P 0
#define FLAG_m 0
#define FLAG_S 0
#endif

#ifdef FOR_mkswap
#ifndef TT
#define TT this.mkswap
#endif
#endif

#ifdef FOR_mktemp
#ifndef TT
#define TT this.mktemp
#endif
#define FLAG_p (1<<0)
#define FLAG_tmpdir (1<<1)
#define FLAG_d (1<<1)
#define FLAG_directory (1<<2)
#define FLAG_q (1<<2)
#endif

#ifdef FOR_modinfo
#ifndef TT
#define TT this.modinfo
#endif
#define FLAG_0 (1<<0)
#define FLAG_F (1<<1)
#define FLAG_k (1<<2)
#define FLAG_b (1<<3)
#endif

#ifdef FOR_modprobe
#ifndef TT
#define TT this.modprobe
#endif
#define FLAG_b 0
#define FLAG_D 0
#define FLAG_s 0
#define FLAG_v 0
#define FLAG_q 0
#define FLAG_r 0
#define FLAG_l 0
#define FLAG_a 0
#endif

#ifdef FOR_more
#ifndef TT
#define TT this.more
#endif
#endif

#ifdef FOR_mount
#ifndef TT
#define TT this.mount
#endif
#define FLAG_o (1<<0)
#define FLAG_t (1<<1)
#define FLAG_w (1<<2)
#define FLAG_v (1<<3)
#define FLAG_r (1<<4)
#define FLAG_n (1<<5)
#define FLAG_f (1<<6)
#define FLAG_a (1<<7)
#define FLAG_O (1<<8)
#endif

#ifdef FOR_mountpoint
#ifndef TT
#define TT this.mountpoint
#endif
#define FLAG_x (1<<0)
#define FLAG_d (1<<1)
#define FLAG_q (1<<2)
#endif

#ifdef FOR_mv
#ifndef TT
#define TT this.mv
#endif
#define FLAG_i (1<<0)
#define FLAG_f (1<<1)
#define FLAG_F (1<<2)
#define FLAG_n (1<<3)
#define FLAG_v (1<<4)
#endif

#ifdef FOR_nbd_client
#ifndef TT
#define TT this.nbd_client
#endif
#define FLAG_s (1<<0)
#define FLAG_n (1<<1)
#endif

#ifdef FOR_netcat
#ifndef TT
#define TT this.netcat
#endif
#define FLAG_f (1<<0)
#define FLAG_q (1<<1)
#define FLAG_s (1<<2)
#define FLAG_p (1<<3)
#define FLAG_w (1<<4)
#define FLAG_L (1<<5)
#define FLAG_l (1<<6)
#define FLAG_t (1<<7)
#endif

#ifdef FOR_netstat
#ifndef TT
#define TT this.netstat
#endif
#define FLAG_l (1<<0)
#define FLAG_a (1<<1)
#define FLAG_e (1<<2)
#define FLAG_n (1<<3)
#define FLAG_t (1<<4)
#define FLAG_u (1<<5)
#define FLAG_w (1<<6)
#define FLAG_x (1<<7)
#define FLAG_r (1<<8)
#define FLAG_W (1<<9)
#define FLAG_p (1<<10)
#endif

#ifdef FOR_nice
#ifndef TT
#define TT this.nice
#endif
#define FLAG_n (1<<0)
#endif

#ifdef FOR_nl
#ifndef TT
#define TT this.nl
#endif
#define FLAG_E (1<<0)
#define FLAG_w (1<<1)
#define FLAG_s (1<<2)
#define FLAG_n (1<<3)
#define FLAG_b (1<<4)
#define FLAG_l (1<<5)
#define FLAG_v (1<<6)
#endif

#ifdef FOR_nohup
#ifndef TT
#define TT this.nohup
#endif
#endif

#ifdef FOR_nsenter
#ifndef TT
#define TT this.nsenter
#endif
#define FLAG_user 0
#define FLAG_U 0
#define FLAG_uts 0
#define FLAG_u 0
#define FLAG_pid 0
#define FLAG_p 0
#define FLAG_net 0
#define FLAG_n 0
#define FLAG_mount 0
#define FLAG_m 0
#define FLAG_ipc 0
#define FLAG_i 0
#define FLAG_target 0
#define FLAG_t 0
#define FLAG_no_fork 0
#define FLAG_F 0
#endif

#ifdef FOR_od
#ifndef TT
#define TT this.od
#endif
#define FLAG_t (1<<0)
#define FLAG_A (1<<1)
#define FLAG_b (1<<2)
#define FLAG_c (1<<3)
#define FLAG_d (1<<4)
#define FLAG_o (1<<5)
#define FLAG_s (1<<6)
#define FLAG_x (1<<7)
#define FLAG_N (1<<8)
#define FLAG_v (1<<9)
#define FLAG_j (1<<10)
#endif

#ifdef FOR_oneit
#ifndef TT
#define TT this.oneit
#endif
#define FLAG_p 0
#define FLAG_c 0
#endif

#ifdef FOR_openvt
#ifndef TT
#define TT this.openvt
#endif
#define FLAG_w 0
#define FLAG_s 0
#define FLAG_c 0
#endif

#ifdef FOR_partprobe
#ifndef TT
#define TT this.partprobe
#endif
#endif

#ifdef FOR_passwd
#ifndef TT
#define TT this.passwd
#endif
#define FLAG_u 0
#define FLAG_l 0
#define FLAG_d 0
#define FLAG_a 0
#endif

#ifdef FOR_paste
#ifndef TT
#define TT this.paste
#endif
#define FLAG_s (1<<0)
#define FLAG_d (1<<1)
#endif

#ifdef FOR_patch
#ifndef TT
#define TT this.patch
#endif
#define FLAG_R (1<<0)
#define FLAG_i (1<<1)
#define FLAG_p (1<<2)
#define FLAG_l (1<<3)
#define FLAG_u (1<<4)
#define FLAG_x 0
#endif

#ifdef FOR_pgrep
#ifndef TT
#define TT this.pgrep
#endif
#define FLAG_f 0
#define FLAG_l 0
#define FLAG_n 0
#define FLAG_o 0
#define FLAG_v 0
#define FLAG_x 0
#define FLAG_s 0
#define FLAG_P 0
#endif

#ifdef FOR_pidof
#ifndef TT
#define TT this.pidof
#endif
#define FLAG_o (1<<0)
#define FLAG_s (1<<1)
#endif

#ifdef FOR_ping
#ifndef TT
#define TT this.ping
#endif
#define FLAG_6 0
#define FLAG_4 0
#define FLAG_q 0
#define FLAG_w 0
#define FLAG_W 0
#define FLAG_I 0
#define FLAG_s 0
#define FLAG_c 0
#define FLAG_t 0
#endif

#ifdef FOR_pivot_root
#ifndef TT
#define TT this.pivot_root
#endif
#endif

#ifdef FOR_pmap
#ifndef TT
#define TT this.pmap
#endif
#define FLAG_q (1<<0)
#define FLAG_x (1<<1)
#endif

#ifdef FOR_printenv
#ifndef TT
#define TT this.printenv
#endif
#define FLAG_null (1<<0)
#define FLAG_0 (1<<0)
#endif

#ifdef FOR_printf
#ifndef TT
#define TT this.printf
#endif
#endif

#ifdef FOR_ps
#ifndef TT
#define TT this.ps
#endif
#define FLAG_T (1<<0)
#define FLAG_o (1<<1)
#endif

#ifdef FOR_pwd
#ifndef TT
#define TT this.pwd
#endif
#define FLAG_P (1<<0)
#define FLAG_L (1<<1)
#endif

#ifdef FOR_pwdx
#ifndef TT
#define TT this.pwdx
#endif
#define FLAG_a (1<<0)
#endif

#ifdef FOR_readahead
#ifndef TT
#define TT this.readahead
#endif
#endif

#ifdef FOR_readlink
#ifndef TT
#define TT this.readlink
#endif
#define FLAG_q (1<<0)
#define FLAG_n (1<<1)
#define FLAG_e (1<<2)
#define FLAG_f (1<<3)
#endif

#ifdef FOR_realpath
#ifndef TT
#define TT this.realpath
#endif
#endif

#ifdef FOR_reboot
#ifndef TT
#define TT this.reboot
#endif
#define FLAG_n 0
#endif

#ifdef FOR_renice
#ifndef TT
#define TT this.renice
#endif
#define FLAG_n (1<<0)
#define FLAG_u (1<<1)
#define FLAG_p (1<<2)
#define FLAG_g (1<<3)
#endif

#ifdef FOR_reset
#ifndef TT
#define TT this.reset
#endif
#endif

#ifdef FOR_rev
#ifndef TT
#define TT this.rev
#endif
#endif

#ifdef FOR_rfkill
#ifndef TT
#define TT this.rfkill
#endif
#endif

#ifdef FOR_rm
#ifndef TT
#define TT this.rm
#endif
#define FLAG_r (1<<0)
#define FLAG_R (1<<1)
#define FLAG_i (1<<2)
#define FLAG_f (1<<3)
#endif

#ifdef FOR_rmdir
#ifndef TT
#define TT this.rmdir
#endif
#define FLAG_p (1<<0)
#endif

#ifdef FOR_rmmod
#ifndef TT
#define TT this.rmmod
#endif
#define FLAG_f (1<<0)
#define FLAG_w (1<<1)
#endif

#ifdef FOR_route
#ifndef TT
#define TT this.route
#endif
#define FLAG_A (1<<0)
#define FLAG_e (1<<1)
#define FLAG_n (1<<2)
#endif

#ifdef FOR_sed
#ifndef TT
#define TT this.sed
#endif
#define FLAG_r 0
#define FLAG_n 0
#define FLAG_i 0
#define FLAG_f 0
#define FLAG_e 0
#define FLAG_version 0
#endif

#ifdef FOR_seq
#ifndef TT
#define TT this.seq
#endif
#define FLAG_s (1<<0)
#define FLAG_f (1<<1)
#endif

#ifdef FOR_setsid
#ifndef TT
#define TT this.setsid
#endif
#define FLAG_t (1<<0)
#endif

#ifdef FOR_sh
#ifndef TT
#define TT this.sh
#endif
#define FLAG_i 0
#define FLAG_c 0
#endif

#ifdef FOR_sha1sum
#ifndef TT
#define TT this.sha1sum
#endif
#define FLAG_b (1<<0)
#endif

#ifdef FOR_shred
#ifndef TT
#define TT this.shred
#endif
#define FLAG_f 0
#define FLAG_o 0
#define FLAG_n 0
#define FLAG_s 0
#define FLAG_u 0
#define FLAG_x 0
#define FLAG_z 0
#endif

#ifdef FOR_skeleton
#ifndef TT
#define TT this.skeleton
#endif
#define FLAG_a 0
#define FLAG_b 0
#define FLAG_c 0
#define FLAG_d 0
#define FLAG_e 0
#define FLAG_also 0
#define FLAG_blubber 0
#define FLAG_walrus 0
#endif

#ifdef FOR_skeleton_alias
#ifndef TT
#define TT this.skeleton_alias
#endif
#define FLAG_q 0
#define FLAG_d 0
#define FLAG_b 0
#endif

#ifdef FOR_sleep
#ifndef TT
#define TT this.sleep
#endif
#endif

#ifdef FOR_sort
#ifndef TT
#define TT this.sort
#endif
#define FLAG_n (1<<0)
#define FLAG_u (1<<1)
#define FLAG_r (1<<2)
#define FLAG_i (1<<3)
#define FLAG_f (1<<4)
#define FLAG_d (1<<5)
#define FLAG_z (1<<6)
#define FLAG_s (1<<7)
#define FLAG_c (1<<8)
#define FLAG_M (1<<9)
#define FLAG_b (1<<10)
#define FLAG_x (1<<11)
#define FLAG_t (1<<12)
#define FLAG_k (1<<13)
#define FLAG_o (1<<14)
#define FLAG_m (1<<15)
#define FLAG_T (1<<16)
#define FLAG_S (1<<17)
#define FLAG_g (1<<18)
#endif

#ifdef FOR_split
#ifndef TT
#define TT this.split
#endif
#define FLAG_l (1<<0)
#define FLAG_b (1<<1)
#define FLAG_a (1<<2)
#endif

#ifdef FOR_stat
#ifndef TT
#define TT this.stat
#endif
#define FLAG_f (1<<0)
#define FLAG_c (1<<1)
#endif

#ifdef FOR_strings
#ifndef TT
#define TT this.strings
#endif
#define FLAG_o (1<<0)
#define FLAG_f (1<<1)
#define FLAG_n (1<<2)
#define FLAG_a (1<<3)
#endif

#ifdef FOR_su
#ifndef TT
#define TT this.su
#endif
#define FLAG_s 0
#define FLAG_c 0
#define FLAG_p 0
#define FLAG_m 0
#define FLAG_l 0
#endif

#ifdef FOR_sulogin
#ifndef TT
#define TT this.sulogin
#endif
#define FLAG_t 0
#endif

#ifdef FOR_swapoff
#ifndef TT
#define TT this.swapoff
#endif
#endif

#ifdef FOR_swapon
#ifndef TT
#define TT this.swapon
#endif
#define FLAG_p (1<<0)
#endif

#ifdef FOR_switch_root
#ifndef TT
#define TT this.switch_root
#endif
#define FLAG_h (1<<0)
#define FLAG_c (1<<1)
#endif

#ifdef FOR_sync
#ifndef TT
#define TT this.sync
#endif
#endif

#ifdef FOR_sysctl
#ifndef TT
#define TT this.sysctl
#endif
#define FLAG_A (1<<0)
#define FLAG_a (1<<1)
#define FLAG_p (1<<2)
#define FLAG_w (1<<3)
#define FLAG_q (1<<4)
#define FLAG_N (1<<5)
#define FLAG_e (1<<6)
#define FLAG_n (1<<7)
#endif

#ifdef FOR_syslogd
#ifndef TT
#define TT this.syslogd
#endif
#define FLAG_D 0
#define FLAG_L 0
#define FLAG_K 0
#define FLAG_S 0
#define FLAG_n 0
#define FLAG_a 0
#define FLAG_f 0
#define FLAG_p 0
#define FLAG_O 0
#define FLAG_m 0
#define FLAG_s 0
#define FLAG_b 0
#define FLAG_R 0
#define FLAG_l 0
#endif

#ifdef FOR_tac
#ifndef TT
#define TT this.tac
#endif
#endif

#ifdef FOR_tail
#ifndef TT
#define TT this.tail
#endif
#define FLAG_n (1<<0)
#define FLAG_c (1<<1)
#define FLAG_f (1<<2)
#endif

#ifdef FOR_tar
#ifndef TT
#define TT this.tar
#endif
#define FLAG_file 0
#define FLAG_f 0
#define FLAG_directory 0
#define FLAG_C 0
#define FLAG_files_from 0
#define FLAG_T 0
#define FLAG_exclude_from 0
#define FLAG_X 0
#define FLAG_touch 0
#define FLAG_m 0
#define FLAG_to_stdout 0
#define FLAG_O 0
#define FLAG_gzip 0
#define FLAG_z 0
#define FLAG_verbose 0
#define FLAG_v 0
#define FLAG_list 0
#define FLAG_t 0
#define FLAG_extract 0
#define FLAG_x 0
#define FLAG_dereference 0
#define FLAG_h 0
#define FLAG_create 0
#define FLAG_c 0
#define FLAG_keep_old 0
#define FLAG_k 0
#define FLAG_same_permissions 0
#define FLAG_p 0
#define FLAG_no_same_owner 0
#define FLAG_o 0
#define FLAG_to_command 0
#define FLAG_exclude 0
#define FLAG_overwrite 0
#define FLAG_no_same_permissions 0
#define FLAG_numeric_owner 0
#define FLAG_no_recursion 0
#endif

#ifdef FOR_taskset
#ifndef TT
#define TT this.taskset
#endif
#define FLAG_a (1<<0)
#define FLAG_p (1<<1)
#endif

#ifdef FOR_tcpsvd
#ifndef TT
#define TT this.tcpsvd
#endif
#define FLAG_v 0
#define FLAG_E 0
#define FLAG_h 0
#define FLAG_l 0
#define FLAG_u 0
#define FLAG_b 0
#define FLAG_C 0
#define FLAG_c 0
#endif

#ifdef FOR_tee
#ifndef TT
#define TT this.tee
#endif
#define FLAG_a (1<<0)
#define FLAG_i (1<<1)
#endif

#ifdef FOR_telnet
#ifndef TT
#define TT this.telnet
#endif
#endif

#ifdef FOR_telnetd
#ifndef TT
#define TT this.telnetd
#endif
#define FLAG_i 0
#define FLAG_K 0
#define FLAG_S 0
#define FLAG_F 0
#define FLAG_l 0
#define FLAG_f 0
#define FLAG_p 0
#define FLAG_b 0
#define FLAG_w 0
#endif

#ifdef FOR_test
#ifndef TT
#define TT this.test
#endif
#endif

#ifdef FOR_tftpd
#ifndef TT
#define TT this.tftpd
#endif
#define FLAG_l 0
#define FLAG_u 0
#define FLAG_c 0
#define FLAG_r 0
#endif

#ifdef FOR_time
#ifndef TT
#define TT this.time
#endif
#define FLAG_p (1<<0)
#endif

#ifdef FOR_timeout
#ifndef TT
#define TT this.timeout
#endif
#define FLAG_s (1<<0)
#define FLAG_k (1<<1)
#endif

#ifdef FOR_top
#ifndef TT
#define TT this.top
#endif
#define FLAG_b (1<<0)
#define FLAG_m (1<<1)
#define FLAG_n (1<<2)
#define FLAG_d (1<<3)
#endif

#ifdef FOR_touch
#ifndef TT
#define TT this.touch
#endif
#define FLAG_t (1<<0)
#define FLAG_r (1<<1)
#define FLAG_m (1<<2)
#define FLAG_d (1<<3)
#define FLAG_c (1<<4)
#define FLAG_a (1<<5)
#endif

#ifdef FOR_toybox
#ifndef TT
#define TT this.toybox
#endif
#endif

#ifdef FOR_tr
#ifndef TT
#define TT this.tr
#endif
#define FLAG_d 0
#define FLAG_s 0
#define FLAG_c 0
#define FLAG_C 0
#endif

#ifdef FOR_traceroute
#ifndef TT
#define TT this.traceroute
#endif
#define FLAG_4 (1<<0)
#define FLAG_6 (1<<1)
#define FLAG_F (1<<2)
#define FLAG_U (1<<3)
#define FLAG_I (1<<4)
#define FLAG_l (1<<5)
#define FLAG_d (1<<6)
#define FLAG_n (1<<7)
#define FLAG_v (1<<8)
#define FLAG_r (1<<9)
#define FLAG_m (1<<10)
#define FLAG_p (1<<11)
#define FLAG_q (1<<12)
#define FLAG_s (1<<13)
#define FLAG_t (1<<14)
#define FLAG_w (1<<15)
#define FLAG_g (1<<16)
#define FLAG_z (1<<17)
#define FLAG_f (1<<18)
#define FLAG_i (1<<19)
#endif

#ifdef FOR_true
#ifndef TT
#define TT this.true
#endif
#endif

#ifdef FOR_truncate
#ifndef TT
#define TT this.truncate
#endif
#define FLAG_c (1<<0)
#define FLAG_s (1<<1)
#endif

#ifdef FOR_tty
#ifndef TT
#define TT this.tty
#endif
#define FLAG_s (1<<0)
#endif

#ifdef FOR_umount
#ifndef TT
#define TT this.umount
#endif
#define FLAG_v (1<<0)
#define FLAG_t (1<<1)
#define FLAG_a (1<<2)
#define FLAG_r (1<<3)
#define FLAG_l (1<<4)
#define FLAG_f (1<<5)
#define FLAG_D (1<<6)
#define FLAG_d (1<<7)
#define FLAG_n (1<<8)
#endif

#ifdef FOR_uname
#ifndef TT
#define TT this.uname
#endif
#define FLAG_s (1<<0)
#define FLAG_n (1<<1)
#define FLAG_r (1<<2)
#define FLAG_v (1<<3)
#define FLAG_m (1<<4)
#define FLAG_a (1<<5)
#define FLAG_o (1<<6)
#endif

#ifdef FOR_uniq
#ifndef TT
#define TT this.uniq
#endif
#define FLAG_u (1<<0)
#define FLAG_d (1<<1)
#define FLAG_c (1<<2)
#define FLAG_i (1<<3)
#define FLAG_z (1<<4)
#define FLAG_w (1<<5)
#define FLAG_s (1<<6)
#define FLAG_f (1<<7)
#endif

#ifdef FOR_unlink
#ifndef TT
#define TT this.unlink
#endif
#endif

#ifdef FOR_unshare
#ifndef TT
#define TT this.unshare
#endif
#define FLAG_U (1<<0)
#define FLAG_u (1<<1)
#define FLAG_p (1<<2)
#define FLAG_n (1<<3)
#define FLAG_m (1<<4)
#define FLAG_i (1<<5)
#endif

#ifdef FOR_uptime
#ifndef TT
#define TT this.uptime
#endif
#endif

#ifdef FOR_useradd
#ifndef TT
#define TT this.useradd
#endif
#define FLAG_H 0
#define FLAG_D 0
#define FLAG_S 0
#define FLAG_h 0
#define FLAG_g 0
#define FLAG_s 0
#define FLAG_G 0
#define FLAG_u 0
#endif

#ifdef FOR_userdel
#ifndef TT
#define TT this.userdel
#endif
#define FLAG_r 0
#endif

#ifdef FOR_usleep
#ifndef TT
#define TT this.usleep
#endif
#endif

#ifdef FOR_uudecode
#ifndef TT
#define TT this.uudecode
#endif
#define FLAG_o (1<<0)
#endif

#ifdef FOR_uuencode
#ifndef TT
#define TT this.uuencode
#endif
#define FLAG_m (1<<0)
#endif

#ifdef FOR_vconfig
#ifndef TT
#define TT this.vconfig
#endif
#endif

#ifdef FOR_vmstat
#ifndef TT
#define TT this.vmstat
#endif
#define FLAG_n (1<<0)
#endif

#ifdef FOR_w
#ifndef TT
#define TT this.w
#endif
#endif

#ifdef FOR_watch
#ifndef TT
#define TT this.watch
#endif
#define FLAG_e 0
#define FLAG_t 0
#define FLAG_n 0
#endif

#ifdef FOR_wc
#ifndef TT
#define TT this.wc
#endif
#define FLAG_l (1<<0)
#define FLAG_w (1<<1)
#define FLAG_c (1<<2)
#define FLAG_m (1<<3)
#endif

#ifdef FOR_which
#ifndef TT
#define TT this.which
#endif
#define FLAG_a (1<<0)
#endif

#ifdef FOR_who
#ifndef TT
#define TT this.who
#endif
#define FLAG_a 0
#endif

#ifdef FOR_xargs
#ifndef TT
#define TT this.xargs
#endif
#define FLAG_0 (1<<0)
#define FLAG_s (1<<1)
#define FLAG_n (1<<2)
#define FLAG_r (1<<3)
#define FLAG_x (1<<4)
#define FLAG_t (1<<5)
#define FLAG_p (1<<6)
#define FLAG_L (1<<7)
#define FLAG_E (1<<8)
#define FLAG_I (1<<9)
#endif

#ifdef FOR_xzcat
#ifndef TT
#define TT this.xzcat
#endif
#endif

#ifdef FOR_yes
#ifndef TT
#define TT this.yes
#endif
#endif

#ifdef FOR_zcat
#ifndef TT
#define TT this.zcat
#endif
#endif

