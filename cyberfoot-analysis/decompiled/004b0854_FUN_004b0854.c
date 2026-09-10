// Address: 004b0854
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b0854(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar4;
  undefined4 uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_20 = &LAB_004b0973;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_5 = 0;
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
    ppstm = (LPSTREAM *)FUN_00406880(&local_c);
    HVar4 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
    if (HVar4 == 0) {
      (*(code *)**(undefined4 **)param_1[0xb])();
      (**(code **)(*local_c + 0x10))();
      iVar3 = (*(code *)**(undefined4 **)param_1[0xb])();
      if (extraout_EDX_00 == 0 && iVar3 == 0) {
        uStack_24 = 0;
        uVar5 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_c);
        iVar3 = FUN_004b1b8c(uVar5);
        param_1[0xd] = iVar3;
        iVar3 = FUN_004b1b24(uVar5);
        param_1[0xe] = iVar3;
        FUN_00403a84(uVar5);
        local_5 = 1;
      }
      FUN_00406880(&local_c);
    }
    else {
      GlobalFree(hGlobal);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004b097a;
  puStack_20 = (undefined1 *)0x4b0972;
  FUN_00406880(&local_c,uStack_24,puVar1);
  return;
}

