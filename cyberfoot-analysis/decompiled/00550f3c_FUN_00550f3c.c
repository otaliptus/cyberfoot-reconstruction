// Address: 00550f3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00550f3c(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)(param_1 + 0xc) = 4;
  uVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_0042a5c8(uVar1,"Tahoma");
  iVar2 = *(int *)(param_1 + 0x1c);
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00551038;
  *(undefined4 *)(param_1 + 0x34) = 0xffe09f;
  *(undefined **)(param_1 + 0x14) = &DAT_00754f00;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  FUN_0042a640(*(undefined4 *)(param_1 + 0x1c),0x14);
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = FUN_004b0580(PTR_LAB_004ae3fc,1);
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(iVar2 + 0x14) = param_1;
  *(undefined1 **)(iVar2 + 0x10) = &LAB_00551044;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

