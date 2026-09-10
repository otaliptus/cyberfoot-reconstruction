// Address: 00466f18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00466f18(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  LONG *in_FS_OFFSET;
  byte bVar8;
  int aiStackY_1814 [1517];
  tagPOINT *ptVar9;
  HWND hWndTo;
  undefined1 *puVar10;
  UINT UVar11;
  LONG local_28;
  LONG local_24;
  tagPOINT local_20;
  int aiStack_18 [3];
  char local_9;
  undefined4 local_8;
  
  bVar8 = 0;
  local_8 = param_3;
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if ((iVar1 == 0) || ((*(char *)(iVar1 + 0x1a7) == '\0' || (*(int *)(iVar1 + 0x17c) == 0)))) {
      FUN_0041c968(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),&local_28);
      local_20.x = local_28;
      local_20.y = local_24;
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_00465d20(*(int *)(param_1 + 0x30),&local_20,&local_28);
        local_20.x = local_28;
        local_20.y = local_24;
      }
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x17c) + 0x14))(*(int **)(iVar1 + 0x17c),param_1,&local_20);
      UVar11 = 2;
      ptVar9 = &local_20;
      hWndTo = (HWND)0x0;
      pHVar4 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0xa0));
      MapWindowPoints(pHVar4,hWndTo,ptVar9,UVar11);
    }
    FUN_00466198(param_1);
    uVar5 = FUN_004661ac(param_1);
    FUN_0041c9b8(local_20.x,local_20.y,uVar5);
    aiStack_18[(uint)bVar8 * -2 + -1] = *(int *)(&stack0xffffffcc + (uint)bVar8 * -8);
    aiStack_18[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
         aiStack_18[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -6];
    (aiStack_18 + (uint)bVar8 * -2 + (uint)bVar8 * -2)[(uint)bVar8 * -2 + 1] =
         (aiStack_18 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + -6)[(uint)bVar8 * -2 + 1];
    uVar2 = FUN_004670f8(param_1,&local_20);
    return uVar2;
  }
  FUN_00467400(param_1);
  if ((*(int *)(param_1 + 0xa0) == 0) ||
     (cVar3 = FUN_00403c80(*(undefined4 *)(param_1 + 0xa0),param_2,param_1), cVar3 != '\0')) {
    local_9 = '\x01';
  }
  else {
    local_9 = '\0';
  }
  if (local_9 == '\0') {
    return 0;
  }
  aiStack_18[2] = FUN_0046391c(PTR_PTR_00460b74,1,param_1);
  puVar10 = &LAB_004670e3;
  *in_FS_OFFSET = (LONG)&stack0xffffffb0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    pHVar4 = (HWND)0x0;
  }
  else {
    pHVar4 = (HWND)FUN_0046cae0();
  }
  FUN_00465ba8(param_1,&local_20);
  if (pHVar4 != (HWND)0x0) {
    MapWindowPoints(pHVar4,(HWND)0x0,&local_20,2);
  }
  *(int *)(aiStack_18[2] + 4) = param_2;
  *(undefined1 *)(aiStack_18[2] + 0x54) = param_4;
  *(undefined4 *)(aiStack_18[2] + 0x58) = local_8;
  piVar6 = (int *)(aiStack_18[2] + 0x48 + (uint)bVar8 * -8);
  *(LONG *)(aiStack_18[2] + 0x44) = local_20.x;
  piVar7 = piVar6 + (uint)bVar8 * -2 + 1;
  *piVar6 = aiStack_18[(uint)bVar8 * -2 + -1];
  *piVar7 = aiStack_18[(uint)bVar8 * -2 + (uint)bVar8 * -2];
  piVar7[(uint)bVar8 * -2 + 1] =
       (aiStack_18 + (uint)bVar8 * -2 + (uint)bVar8 * -2)[(uint)bVar8 * -2 + 1];
  UVar11 = 1;
  ptVar9 = &local_20;
  pHVar4 = (HWND)FUN_0046cae0(param_2);
  MapWindowPoints((HWND)0x0,pHVar4,ptVar9,UVar11);
  FUN_00403c80(param_2,aiStack_18[2],local_20.x);
  *in_FS_OFFSET = local_20.y;
  uVar2 = FUN_00403a84(aiStack_18[2],local_20.y,puVar10);
  return uVar2;
}

