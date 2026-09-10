// Address: 004307ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004307ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStackY_24;
  
  bVar5 = 0;
  iVar1 = FUN_00403a54(PTR_PTR_00429318,1);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  puVar4 = (undefined4 *)(iVar1 + 0x18);
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined1 *)(iVar1 + 0x70) = param_5;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = FUN_00403c34(param_4,PTR_PTR_0041c090);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *in_FS_OFFSET = uStackY_24;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8b0);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  FUN_0042f214(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = iVar1;
  FUN_0042f210();
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x4308d2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8b0);
  return;
}

