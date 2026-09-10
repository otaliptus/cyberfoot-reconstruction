// Address: 0051d104
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051d104(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0051a8f0(param_1,0,param_3);
  uVar1 = FUN_0051aa38(PTR_PTR_00515d28,1,param_3);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0051b40c(PTR_PTR_0051b360,1,param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x24) = 0x2c;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

