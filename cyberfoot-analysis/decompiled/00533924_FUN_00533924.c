// Address: 00533924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00533924(int param_1,char param_2,undefined4 param_3)

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
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined1 *)(param_1 + 0x4c) = 4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x808080;
  *(undefined4 *)(param_1 + 0x5c) = 0xff0000;
  *(undefined4 *)(param_1 + 0x60) = 5;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_0042a5c8(uVar1,"Tahoma");
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00533aa0;
  *(undefined4 *)(param_1 + 0x38) = 0xb0721c;
  *(undefined4 *)(param_1 + 0x18) = 0x9f661a;
  *(undefined1 *)(param_1 + 0x24) = 0xff;
  *(undefined1 *)(param_1 + 0x34) = 0xff;
  FUN_0042a640(*(undefined4 *)(param_1 + 0x20),0xc);
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_004b0580(PTR_LAB_004ae3fc,1);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(iVar2 + 0x14) = param_1;
  *(undefined1 **)(iVar2 + 0x10) = &LAB_00533aac;
  *(undefined4 *)(param_1 + 0x68) = 0xb0721c;
  uVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 100) = uVar1;
  FUN_0042a5c8(uVar1,"Tahoma");
  iVar2 = *(int *)(param_1 + 100);
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00533aa0;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0x74) = 0x1fffffff;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

