// Address: 004267a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004267a8(int param_1)

{
  bool bVar1;
  DWORD DVar2;
  LONG LVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_54;
  undefined1 *puStackY_50;
  undefined1 *puStackY_4c;
  undefined4 uStackY_48;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  
  DVar2 = GetCurrentThreadId();
  if (DVar2 != *(DWORD *)PTR_DAT_0066b7a8) {
    GetCurrentThreadId();
    puStack_2c = (undefined1 *)0x0;
    uStack_30 = 0x4267e6;
    FUN_0040e468(PTR_DAT_0041c4ec,1,PTR_PTR_0066b3a8);
    uStack_30 = 0x4267eb;
    FUN_00404250();
  }
  if (param_1 < 1) {
    FUN_0042675c();
  }
  else {
    FUN_00426768(param_1);
  }
  puStack_2c = (undefined1 *)0x42680c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
  puStack_2c = &LAB_00426936;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uStack_3c = 0x426828;
  LVar3 = InterlockedExchange(&DAT_00662654,0);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((LVar3 == 0) || (*(int *)(LVar3 + 8) < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (0 < *(int *)(LVar3 + 8))) {
    piVar4 = (int *)FUN_0041e01c(LVar3,0);
    FUN_0041df0c(LVar3,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
    uStackY_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_48;
    puStackY_50 = &LAB_004268b2;
    uStackY_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_54;
    puStackY_4c = &stack0xfffffffc;
    (**(code **)(*piVar4 + 8))(*(undefined4 *)(*piVar4 + 0xc));
    *in_FS_OFFSET = uStackY_54;
    *in_FS_OFFSET = uStackY_48;
    uStackY_48 = 0x4268e0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  FUN_00403a84(LVar3,uStack_3c,&stack0xfffffffc);
  return;
}

