// Address: 0040290c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040290c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffffff7f;
  if (DAT_0066c008 != (code *)0x0) {
    (*DAT_0066c008)(uVar2,param_2);
  }
  if ((byte)uVar2 == 0) {
    iVar1 = FUN_00406fb0();
    uVar2 = *(uint *)(iVar1 + 4);
  }
  else if ((byte)uVar2 < 0x19) {
    uVar2 = (uint)(byte)(&DAT_00662050)[param_1 & 0x7f];
  }
  FUN_00402900(uVar2 & 0xff,param_2);
  return;
}

