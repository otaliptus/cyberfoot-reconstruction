// Address: 0045d16c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0045d16c(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046872c(param_1,0);
  if (*PTR_DAT_0066b148 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = DAT_0045d25c;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = DAT_0045d258;
  }
  FUN_004659c4(param_1,0x91);
  FUN_004659e8(param_1,0x19);
  FUN_0046cd14(param_1,1);
  FUN_004663cc(param_1,0);
  uVar1 = FUN_0042acbc(PTR_PTR_00460cd4,1);
  *(undefined4 *)(param_1 + 0x208) = uVar1;
  FUN_00464de4(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x238) = 0x10;
  uVar1 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  uVar1 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = 8;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

