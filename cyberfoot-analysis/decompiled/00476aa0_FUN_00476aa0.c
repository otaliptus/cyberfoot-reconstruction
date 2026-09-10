// Address: 00476aa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00476aa0(int param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined1 *)(param_1 + 0x3b) = 2;
  *(undefined1 *)(param_1 + 0x3c) = 2;
  uVar1 = FUN_0047658c();
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  iVar2 = FUN_00403a54(PTR_DAT_0047361c,1);
  *(int *)(param_1 + 0x78) = iVar2;
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004794b0;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

