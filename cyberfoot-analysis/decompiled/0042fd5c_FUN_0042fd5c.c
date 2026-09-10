// Address: 0042fd5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042fd5c(int param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff84;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 local_5c [84];
  int local_8;
  
  local_8 = param_1;
  if (param_2 != 0) {
    cVar1 = FUN_00403c10(param_2,PTR_PTR_00429378);
    if (cVar1 == '\0') {
      FUN_0041e66c(local_8,param_2);
      return;
    }
  }
  puStack_6c = (undefined1 *)0x42fd8c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8b0);
  puStack_6c = &LAB_0042fe14;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (param_2 == 0) {
    FUN_004032a8(local_5c,0x54,0);
    in_stack_ffffff84 = 0;
    FUN_004307ec(local_8,0,0,0,0,local_5c);
  }
  else {
    FUN_0042f210(*(undefined4 *)(param_2 + 0x28));
    FUN_0042f214(*(undefined4 *)(local_8 + 0x28));
    *(undefined4 *)(local_8 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(local_8 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined4 *)(local_8 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined1 *)(local_8 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  }
  *in_FS_OFFSET = in_stack_ffffff84;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c8b0);
  return;
}

