// Address: 0042b420
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b420(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0042b03c(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x42b46b;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8c8);
  return;
}

