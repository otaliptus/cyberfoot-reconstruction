// Address: 00402738
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00402738(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  if ((DAT_0066c5c4 == '\0') && (cVar1 = FUN_00401b3c(), cVar1 == '\0')) {
    return 0;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_0066c04d != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  cVar1 = FUN_0040255c(param_1,param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_00402228(param_2);
    iVar3 = (*(uint *)(param_1 + -4) & 0x7ffffffc) - 4;
    if (param_2 < iVar3) {
      iVar3 = param_2;
    }
    if (iVar2 != 0) {
      FUN_00402a04(param_1,iVar2,iVar3);
      FUN_004023b8(param_1);
    }
  }
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_0066c04d != '\0') {
    uStack_20 = 0x4027e8;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  return uVar4;
}

