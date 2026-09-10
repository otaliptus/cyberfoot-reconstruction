// Address: 0046b694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046b694(int param_1,int param_2)

{
  int iVar1;
  HWND hWndTo;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagPOINT *lpPoints;
  UINT cPoints;
  undefined1 *puVar3;
  tagPOINT local_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  puVar3 = &stack0xfffffffc;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = *(int *)(param_2 + 4);
    local_1c.x = *(LONG *)(iVar1 + 0x44);
    local_1c.y = *(LONG *)(iVar1 + 0x48);
    uStack_14 = *(undefined4 *)(iVar1 + 0x4c);
    uStack_10 = *(undefined4 *)(iVar1 + 0x50);
    cPoints = 2;
    lpPoints = &local_1c;
    local_c = param_2;
    local_8 = param_1;
    hWndTo = (HWND)FUN_0046cae0(param_1);
    MapWindowPoints((HWND)0x0,hWndTo,lpPoints,cPoints);
    FUN_00469298(local_8);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    FUN_00403c80(*(undefined4 *)(*(int *)(local_c + 4) + 0x38),local_8,&local_1c);
    if ((*(char *)(local_8 + 0x1a7) != '\0') && (*(int *)(local_8 + 0x17c) != 0)) {
      iVar1 = *(int *)(local_c + 4);
      (**(code **)(**(int **)(local_8 + 0x17c) + 0x18))
                (*(int **)(local_8 + 0x17c),*(undefined4 *)(iVar1 + 0x38),
                 *(undefined1 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
    }
    *in_FS_OFFSET = uVar2;
    FUN_004692a0(local_8,uVar2,puVar3);
    return;
  }
  return;
}

