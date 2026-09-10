// Address: 0047f0ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047f0ec(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046872c(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0047f160;
  uVar1 = FUN_0047e568(PTR_PTR_0047b964,1,param_1,0);
  *(undefined4 *)(param_1 + 0x208) = uVar1;
  uVar1 = FUN_0047e568(PTR_PTR_0047b964,1,param_1,1);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined1 *)(param_1 + 0x210) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

