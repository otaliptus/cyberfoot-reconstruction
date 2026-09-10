// Address: 0044c6fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c6fc(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  HDC pHVar3;
  int iVar4;
  HWND pHVar5;
  LRESULT LVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int aiStackY_1828 [1517];
  HDC *lParam;
  UINT UVar8;
  undefined4 uVar9;
  WPARAM WVar10;
  int iVar11;
  int iVar12;
  LPARAM LVar13;
  undefined1 *puVar14;
  int local_4c;
  HDC local_3c;
  HDC local_38;
  int local_34;
  int local_30 [7];
  LRESULT local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  puVar14 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_004032a8(&local_3c,0x30,0);
  iVar2 = FUN_004357d4();
  FUN_00404928(iVar2 + 0x18,param_2);
  FUN_00434f58(iVar2);
  local_3c = (HDC)FUN_004352e8(iVar2);
  iVar11 = 0x58;
  local_38 = local_3c;
  pHVar3 = (HDC)FUN_004352e8(iVar2);
  iVar11 = GetDeviceCaps(pHVar3,iVar11);
  iVar12 = 0x5a;
  pHVar3 = (HDC)FUN_004352e8(iVar2);
  iVar12 = GetDeviceCaps(pHVar3,iVar12);
  cVar1 = FUN_00407144(local_8 + 0x278);
  if (cVar1 == '\0') {
    local_34 = (*(int *)(local_8 + 0x278) * 0x5a0) / iVar11;
    local_30[0] = (*(int *)(local_8 + 0x27c) * 0x5a0) / iVar12;
    local_30[1] = (*(int *)(local_8 + 0x280) * 0x5a0) / iVar11;
    iVar11 = *(int *)(local_8 + 0x284) * 0x5a0;
    local_30[2] = iVar11 / iVar12;
  }
  else {
    iVar4 = FUN_00435318(iVar2);
    local_30[1] = (iVar4 * 0x5a0) / iVar11;
    iVar11 = FUN_004352fc(iVar2,(iVar4 * 0x5a0) % iVar11);
    iVar11 = iVar11 * 0x5a0;
    local_30[2] = iVar11 / iVar12;
  }
  local_30[3] = local_34;
  local_30[(uint)bVar7 * -2 + 4] = local_30[(uint)bVar7 * -2];
  local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
       local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (local_30 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
       (local_30 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  local_4c = local_34;
  *(int *)(&stack0xffffffb8 + (uint)bVar7 * -8) = local_30[(uint)bVar7 * -2];
  *(int *)(&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  *(int *)((int)(&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4) =
       (local_30 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  LVar6 = 0;
  iVar11 = FUN_0046617c(local_8,iVar11 % iVar12);
  local_10 = 0xffffffff;
  local_c = SetMapMode(local_3c,1);
  LVar13 = 0;
  WVar10 = 0;
  UVar8 = 0x439;
  pHVar5 = (HWND)FUN_0046cae0(local_8);
  SendMessageA(pHVar5,UVar8,WVar10,LVar13);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff9c;
  do {
    local_34 = local_4c;
    local_30[(uint)bVar7 * -2] = *(int *)(&stack0xffffffb8 + (uint)bVar7 * -8);
    local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(int *)(&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (local_30 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(int *)((int)(&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                 ((uint)bVar7 * -2 + 1) * 4);
    lParam = &local_3c;
    WVar10 = 1;
    UVar8 = 0x439;
    local_14 = LVar6;
    pHVar5 = (HWND)FUN_0046cae0(local_8);
    LVar6 = SendMessageA(pHVar5,UVar8,WVar10,(LPARAM)lParam);
    if ((LVar6 < iVar11) && (LVar6 != -1)) {
      FUN_00435014(iVar2);
    }
  } while ((LVar6 < iVar11) && (LVar6 != -1));
  FUN_00434fe0(iVar2);
  *in_FS_OFFSET = uVar9;
  LVar13 = 0;
  WVar10 = 0;
  UVar8 = 0x439;
  pHVar5 = (HWND)FUN_0046cae0(local_8,uVar9,puVar14);
  SendMessageA(pHVar5,UVar8,WVar10,LVar13);
  SetMapMode(local_3c,local_c);
  return;
}

