// Address: 004fbd00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004fbd00(int param_1,char param_2)

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
  FUN_004fca20(param_1,0);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 8;
  *(undefined1 *)(param_1 + 0x104) = 2;
  uVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_0050a4a0(param_1,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

