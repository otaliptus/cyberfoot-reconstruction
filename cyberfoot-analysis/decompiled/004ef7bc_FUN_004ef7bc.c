// Address: 004ef7bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004ef7bc(int param_1,char param_2)

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
  FUN_0046e7a8(param_1,0);
  *(undefined1 *)(param_1 + 0x219) = DAT_004ef890;
  *(undefined1 *)(param_1 + 0x218) = DAT_004ef890;
  uVar1 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  FUN_0043b254(uVar1);
  FUN_0043b244(*(undefined4 *)(param_1 + 0x21c),0x14);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x21c),0);
  uVar1 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  FUN_0043b254(uVar1);
  FUN_0043b244(*(undefined4 *)(param_1 + 0x214),400);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x214),0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

