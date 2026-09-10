// Address: 0045b76c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045b76c(int param_1,char param_2)

{
  char cVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046dd28(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0045b7fc;
  FUN_004659c4(param_1,0x41);
  FUN_004659e8(param_1,0x11);
  *(undefined1 *)(param_1 + 0x16d) = 1;
  *(undefined1 *)(param_1 + 0x170) = 1;
  FUN_00456c14();
  cVar1 = FUN_00456cf4();
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | DAT_0045b800;
  }
  else {
    *(uint *)(param_1 + 0x50) = ~DAT_0045b800 & *(uint *)(param_1 + 0x50);
  }
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

