#NoEnv
SendMode Input
#InstallKeybdHook
#UseHook On
Menu, Tray, Icon, shell32.dll, 283
#SingleInstance force
#MaxHotkeysPerInterval 2000
#WinActivateForce
~F24::
	FileRead, key, C:\Users\saytl\Documents\MACROOOOOOOOOOOS\keypressed.txt
	If (key = "0")
		; Pr: Show guides
		Send, ^!{8}
	Else If(key = "1")
		; Open "LibreOffice Writer"
		Run, "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\LibreOffice 7.3\LibreOffice Writer"
	Else If(key = "2")
	{
		; Set speed to 50%
		Send, ^!{F1}
		Sleep 10
		Send, 5
		Sleep 10
		Send, 0
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "3")
	{
		; Set speed to 50%
		Send, ^!{F1}
		Sleep 10
		Send, 1
		Sleep 10
		Send, 0
		Sleep 10
		Send, 0
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "4")
	{
		; Set speed to 50%
		Send, ^!{F1}
		Sleep 10
		Send, 2
		Sleep 10
		Send, 0
		Sleep 10
		Send, 0
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "5")
		; Next in sequence
		Send, ^!{3}
	Else If(key = "6")
		; Previous in sequence
		Send, ^!{4}
	Else If(key = "7")
		; Rectangle Tool
		Send, ^!{5}
	Else If(key = "8")
		; Ellipse Tool
		Send, ^!{6}
	Else If(key = "9")
		; Show Rulers
		Send, ^!{7}
	Else If(key = "F1")
		; Clip Speed/Duration Menu
		Send, ^!{F1}
	Else If(key = "F11")
		; Text Tool
		Send, ^!{F3}
	Else If(key = "F12")
		; Selection Tool
		Send, ^!{F4}
	Else If(key = "F2")
	{
		; Reverse clip via csd menu
		Send, ^!{F1}
		Sleep 10
		Send, {Tab}
		Sleep 10
		Send, {Tab}
		Sleep 10
		Send, {Space}
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "F3")
		; Ripple Delete
		Send, ^!{F6}
	Else If(key = "F5")
		; Make Nested Sequence
		Send, ^!{F8}
	Else If(key = "F6")
		; Ungroup
		Send, ^!{F9}
	Else If(key = "F7")
		; Group
		Send, ^!{F10}
	Else If(key = "F8")
		; Edit in After Effects
		Send, ^!{F11}
	Else If(key = "F9")
		; Edit Clip in Audition
		Send, ^!p
	Else If(key = "E")
		; Edit Sequence in Audition
		Send, ^!{\}
	Else If(key = "`")
		; Razor Tool
		Send, ^!{i}
	Else If(key = "minus")
	{
		; Decrease Gain by 5
		Send, g
		Sleep 10
		Send, -
		Sleep 10
		Send, 5
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "equals")
	{
		; Increase Gain by 5
		Send, g
		Sleep 10
		Send, 5
		Sleep 10
		Send, {Enter}
	}
	Else If(key = "tab")
		; Open "LUTs Folder"
		Run, "X:\client_user\Users\1. Macrofusion\2. LUTs"
	Else If(key = "numDiv")
		; Violet
		Send, ^!a
	Else If(key = "numMult")
		; Iris
		Send, ^!d
	Else If(key = "numMinus")
		; Caribbean
		Send, ^!f
	Else If(key = "num7")
		; Lavender
		Send, ^!h
	Else If(key = "num8")
		; Cerulean
		Send, ^!j
	Else If(key = "num9")
		; Forest
		Send, ^!l
	Else If(key = "delete")
		; Disable
		Send, ^!{PgDn}
	Else If(key = "F10")
		; Insert Rectangle
		Send, ^!r
	Else If(key = "insert")
		; Insert Ellipse
		Send, ^!e
	Else If(key = "left")
		; Toggle Mute
		Send, ^!{Left}
	Else If(key = "down")
		; Toggle Deafen
		Send, ^!{Down}
	; Else If(key = "home")
	; 	; Toggle recording
	; Else If(key = "end")
	; 	; Toggle stream
	; Else If(key = "pageup")
	; 	; Toggle pause recording
	; Else If(key = "pagedown")
	; 	; Studio mode transition
	Else If(key = "right")
		; Always on top
		Send, #^t

Return
