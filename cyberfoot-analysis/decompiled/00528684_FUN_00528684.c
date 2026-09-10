// Address: 00528684
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00528684(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar1 = FUN_004b0580(PTR_LAB_004ae3fc,1);
  *(int *)(param_1 + 0x68) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_005282ec;
  iVar1 = FUN_004b0580(PTR_LAB_004ae3fc,1);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_005282ec;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0xff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x32;
  *(undefined4 *)(param_1 + 0x74) = 0x32;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xc0c0c0;
  *(undefined4 *)(param_1 + 0x44) = 0x808080;
  *(undefined4 *)(param_1 + 0x3c) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0x40) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x25) = 0xff;
  *(undefined1 *)(param_1 + 0x2c) = 0xff;
  *(undefined4 *)(param_1 + 4) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x78) = 3;
  *(undefined4 *)(param_1 + 0x34) = 0x808080;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffff;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

