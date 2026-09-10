// Address: 004b0fa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b0fa0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  puStack_34 = &LAB_004b10d6;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar2 == '\0') &&
     ((iVar3 = (*(code *)**(undefined4 **)param_1[0xb])(), extraout_EDX != 0 || (iVar3 != 0)))) {
    dwBytes = (*(code *)**(undefined4 **)param_1[0xb])();
    hGlobal = GlobalAlloc(2,dwBytes);
    if (hGlobal == (HGLOBAL)0x0) {
      FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
      FUN_00404250();
    }
    FUN_00406880(&local_c);
    local_10 = 0;
    ppstm = (LPSTREAM *)FUN_00406880(&local_c);
    HVar4 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
    if (HVar4 == 0) {
      (*(code *)**(undefined4 **)param_1[0xb])();
      (**(code **)(*local_c + 0x10))();
      iVar3 = (*(code *)**(undefined4 **)param_1[0xb])();
      if (local_10 >> 0x1f == extraout_EDX_00 && local_10 == iVar3) {
        uStack_38 = 0;
        uVar5 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_c);
        uVar6 = FUN_004aee58(PTR_DAT_004adf38,1,uVar5,0);
        FUN_004af62c(local_8,uVar6,&local_20);
        FUN_00403a84(uVar6);
        FUN_00403a84(uVar5);
      }
      FUN_00406880(&local_c);
    }
    else {
      GlobalFree(hGlobal);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004b10dd;
  puStack_34 = (undefined1 *)0x4b10d5;
  FUN_00406880(&local_c,uStack_38,puVar1);
  return;
}

