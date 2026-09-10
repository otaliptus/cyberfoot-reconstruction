// Address: 004b0e38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b0e38(int *param_1,undefined4 param_2,undefined4 param_3)

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
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (int *)0x0;
  puStack_24 = &LAB_004b0f67;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
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
    FUN_00406880(&local_10);
    ppstm = (LPSTREAM *)FUN_00406880(&local_10);
    HVar4 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
    if (HVar4 == 0) {
      (*(code *)**(undefined4 **)param_1[0xb])();
      (**(code **)(*local_10 + 0x10))();
      iVar3 = (*(code *)**(undefined4 **)param_1[0xb])();
      if (extraout_EDX_00 == 0 && iVar3 == 0) {
        uStack_28 = 0;
        uVar5 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_10);
        uVar6 = FUN_004aee58(PTR_DAT_004adf38,1,uVar5,0);
        FUN_004b1c30(local_8,uVar6,local_c);
        FUN_00403a84(uVar6);
        FUN_00403a84(uVar5);
      }
      FUN_00406880(&local_10);
    }
    else {
      GlobalFree(hGlobal);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004b0f6e;
  puStack_24 = (undefined1 *)0x4b0f66;
  FUN_00406880(&local_10,uStack_28,puVar1);
  return;
}

