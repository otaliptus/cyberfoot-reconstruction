// Address: 0047e568
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047e568(int param_1,char param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined2 *)(param_1 + 10) = 0x50;
  *(undefined2 *)(param_1 + 8) = 8;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 10;
  *(undefined4 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0xc;
  *(undefined4 *)(param_1 + 0x28) = 0xff000014;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1,0);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

