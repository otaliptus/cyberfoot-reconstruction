// Address: 0055c940
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0055c940(int param_1,char param_2,undefined4 param_3)

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
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = 0xff0000;
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined4 *)(param_1 + 0x18) = 0x808080;
  *(undefined1 *)(param_1 + 0x28) = 3;
  uVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_0042a5c8(uVar1,"Tahoma");
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

