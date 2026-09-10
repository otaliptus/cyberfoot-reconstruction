// Address: 00504540
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00504540(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  tagRECT *ptStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_28 [8];
  tagRECT local_20;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_38 = (undefined1 *)0x504558;
  local_8 = param_3;
  FUN_00405608(&param_4);
  puStack_3c = &LAB_0050466c;
  ptStack_40 = (tagRECT *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&ptStack_40;
  puStack_38 = &stack0xfffffffc;
  cVar2 = FUN_004e3090(param_1);
  if ((cVar2 != '\0') && (*(char *)(*(int *)PTR_DAT_0066b3ac + 0x88) != '\0')) {
    (**(code **)(*param_1 + 0x238))();
    *(undefined1 *)(param_1 + 0x148) = 4;
    (**(code **)(*param_1 + 0x1cc))(param_1,param_2,local_8,&local_20);
    if ((char)param_1[0xaf] == '\0') {
      iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      iVar3 = *(int *)(iVar3 + 0xb0) + local_20.left;
    }
    else {
      iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x90) + 0x14) + local_20.left;
    }
    ptStack_40 = (tagRECT *)0x5045f3;
    iVar4 = FUN_00465c0c(param_1);
    if (iVar4 < iVar3) {
      ptStack_40 = (tagRECT *)0x5045fe;
      iVar3 = FUN_00465c0c(param_1);
    }
    ptStack_40 = (tagRECT *)0x504610;
    FUN_004070b8(iVar3,local_20.top + -0x14,local_28);
    ptStack_40 = (tagRECT *)0x50461d;
    FUN_00465d20(param_1,local_28,&local_10);
    ptStack_40 = &local_20;
    FUN_004e2e44(param_1[0x163],0xfa,param_4);
    OffsetRect(&local_20,local_10,local_c);
    FUN_004e2dd8(param_1[0x163],&local_20,param_4);
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = (int)ptStack_40;
  puStack_38 = &LAB_00504673;
  puStack_3c = (undefined1 *)0x50466b;
  FUN_00404ff0(&param_4,ptStack_40,puVar1);
  return;
}

