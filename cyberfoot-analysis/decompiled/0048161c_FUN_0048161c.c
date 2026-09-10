// Address: 0048161c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048161c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HMENU pHVar4;
  HWND pHVar5;
  HMENU pHVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004817e2;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != 0) && (iVar3 = FUN_00484ee4(DAT_0066cbf8), puVar1 = puStack_24, -1 < iVar3 + -1))
  {
    iVar7 = 0;
    local_8 = iVar3;
    do {
      iVar3 = FUN_00484ed0(DAT_0066cbf8,iVar7);
      if ((param_2 == *(int *)(iVar3 + 0x248)) &&
         (iVar3 = FUN_00484ed0(DAT_0066cbf8,iVar7), param_1 != iVar3)) {
        local_10 = *(undefined4 *)(param_2 + 8);
        local_c = 0xb;
        puVar9 = &local_10;
        uVar8 = 0;
        FUN_00406d44(PTR_PTR_0066af28,&local_14);
        FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_14,uVar8,puVar9);
        FUN_00404250();
      }
      iVar7 = iVar7 + 1;
      local_8 = local_8 + -1;
      puVar1 = puStack_24;
    } while (local_8 != 0);
  }
  puStack_24 = puVar1;
  if (*(int *)(param_1 + 0x248) != 0) {
    FUN_0047a62c(*(int *)(param_1 + 0x248),0);
  }
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) ||
     ((param_2 != 0 && ((*(byte *)(param_2 + 0x1c) & 8) != 0)))) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x248) = param_2;
  if ((param_2 == 0) ||
     ((FUN_00426f28(param_2,param_1), (*(byte *)(param_1 + 0x1c) & 0x10) == 0 &&
      (*(char *)(param_1 + 0x229) == '\x03')))) {
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      pHVar4 = (HMENU)0x0;
      pHVar5 = (HWND)FUN_0046cae0(param_1);
      SetMenu(pHVar5,pHVar4);
    }
  }
  else if (((*(char *)(*(int *)(param_1 + 0x248) + 0x5c) == '\0') &&
           (*(char *)(param_1 + 0x22f) != '\x01')) || ((*(byte *)(param_1 + 0x1c) & 0x10) != 0)) {
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      pHVar4 = (HMENU)(**(code **)(**(int **)(param_1 + 0x248) + 0x34))();
      pHVar5 = (HWND)FUN_0046cae0(param_1);
      pHVar6 = GetMenu(pHVar5);
      if (pHVar4 != pHVar6) {
        pHVar4 = (HMENU)(**(code **)(**(int **)(param_1 + 0x248) + 0x34))();
        pHVar5 = (HWND)FUN_0046cae0(param_1);
        SetMenu(pHVar5,pHVar4);
      }
      uVar8 = FUN_0046cae0(param_1);
      FUN_0047a62c(param_2,uVar8);
    }
  }
  else if ((*(char *)(param_1 + 0x22f) != '\x01') && (cVar2 = FUN_0046cde4(param_1), cVar2 != '\0'))
  {
    pHVar4 = (HMENU)0x0;
    pHVar5 = (HWND)FUN_0046cae0(param_1);
    SetMenu(pHVar5,pHVar4);
  }
  if (*(char *)(param_1 + 0x22e) != '\0') {
    FUN_004826e0(param_1,1);
  }
  FUN_00481554(param_1);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004817e9;
  puStack_28 = (undefined1 *)0x4817e1;
  FUN_004048d4(&local_14,uStack_2c,puVar1);
  return;
}

