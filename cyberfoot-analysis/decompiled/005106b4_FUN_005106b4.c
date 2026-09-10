// Address: 005106b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005106b4(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  HDC pHVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  byte bVar10;
  int aiStackY_1844 [1504];
  tagRECT *lprect;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 local_7c;
  int local_78 [4];
  tagRECT local_68;
  tagRECT local_58;
  int local_48;
  int aiStack_44 [3];
  tagRECT local_38;
  int local_28;
  int local_24 [3];
  int *local_18;
  char local_12;
  byte local_11;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar10 = 0;
  puStack_8c = &stack0xfffffffc;
  local_7c = 0;
  puStack_90 = &LAB_00510bba;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  local_8 = param_3;
  iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  if (*(char *)(iVar4 + 0xa9) != '\0') {
    local_11 = DAT_00510bc8;
    local_10 = param_1[0xa8];
    local_12 = '\x01';
    iVar4 = *(int *)param_1[0x135];
    (**(code **)(iVar4 + 0x30))((int *)param_1[0x135],param_2,iVar4,&local_28);
    uVar5 = FUN_0050a2cc();
    (**(code **)(*param_1 + 0x1cc))(param_1,uVar5,local_8);
    lprect = &local_38;
    pHVar6 = (HDC)FUN_0042b5a8(param_1[0x82]);
    GetClipBox(pHVar6,lprect);
    if ((((local_38.left <= local_24[1]) && (local_28 <= local_38.right)) &&
        (local_38.top <= local_24[2])) && (local_24[0] <= local_38.bottom)) {
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      (**(code **)(**(int **)(param_1[0x82] + 0xc) + 8))
                (*(int **)(param_1[0x82] + 0xc),*(undefined4 *)(iVar4 + 0x58));
      local_c = (**(code **)(*param_1 + 0x1c4))(param_1,param_2,local_8);
      cVar2 = FUN_005124d0(param_1,param_2,local_8);
      if (cVar2 == '\0') {
        iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
        *(undefined1 *)(*(int *)(iVar4 + 0x48) + 0x45) = 0;
      }
      else {
        local_11 = local_11 | 8;
        iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
        *(undefined1 *)(*(int *)(iVar4 + 0x48) + 0x45) = 1;
        if ((*(byte *)(param_1 + 0x9c) & 4) != 0) {
          local_11 = local_11 | 1;
        }
      }
      cVar2 = FUN_00403c80(param_1);
      if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x9c) & 0x10) == 0)) {
        local_11 = local_11 | 4;
      }
      FUN_00403c80(param_1,param_2,local_8,CONCAT31((int3)((uint)&local_10 >> 8),local_11),&local_10
                   ,&local_c);
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      if ((*(char *)(iVar4 + 0x99) != '\0') && ((local_11 & 8) == 0)) {
        if ((char)param_1[0x12e] == '\x01') {
          local_c = FUN_004e53d0(PTR_DAT_004e5160,0,local_c,10);
        }
        else if ((char)param_1[0x12e] == '\x02') {
          local_c = 0xffffff;
        }
      }
      local_48 = local_28;
      aiStack_44[(uint)bVar10 * -2] = local_24[(uint)bVar10 * -2];
      aiStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           local_24[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (aiStack_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (local_24 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      if ((param_1[0xa4] <= *(int *)(iVar4 + 0x88)) &&
         (FUN_0050f688(param_1,local_78), local_48 < local_78[0])) {
        FUN_0050f688(param_1,local_78);
        local_48 = local_78[0];
      }
      FUN_00511048(param_1,&local_48);
      if (((*(byte *)(param_1 + 0x124) & 0x20) != 0) && ((char)param_1[0xaf] == '\0')) {
        FUN_00510d0c(param_1,param_2,local_8,local_10,&local_28);
      }
      FUN_00511d38(param_1,&local_28);
      if (((*(byte *)(param_1 + 0x9c) & 8) != 0) ||
         (iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2),
         *(char *)(iVar4 + 0x4c) == '\x03')) {
        local_12 = '\0';
      }
      FUN_00403c80(param_1,param_2,local_8,&local_12,CONCAT31((int3)((uint)&local_28 >> 8),local_11)
                   ,&local_28);
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      local_18 = *(int **)(iVar4 + 0x48);
      iVar4 = FUN_0046cae0(param_1);
      local_18[0xf] = iVar4;
      iVar4 = param_1[0x82];
      local_18[8] = iVar4;
      (**(code **)(*param_1 + 0x70))
                (param_1,CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)((int)param_1 + 0x5f)));
      piVar7 = local_18 + (uint)bVar10 * -2 + 10;
      local_18[9] = local_28;
      *piVar7 = local_24[(uint)bVar10 * -2];
      piVar7[(uint)bVar10 * -2 + 1] = local_24[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (piVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (local_24 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      iVar4 = (**(code **)(*param_1 + 0x124))(param_1,local_8);
      local_18[0x13] = iVar4;
      local_18[0x12] = param_1[0xb2];
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      (**(code **)(*param_1 + 0x198))(param_1,param_2,local_8,*(undefined4 *)(iVar4 + 0x48));
      FUN_0050f3c0(param_1,0,&local_58);
      if ((((*(byte *)(param_1 + 0x139) & 8) != 0) && (param_2 == param_1[0xa0])) &&
         (param_1[0xa1] == local_8)) {
        uVar5 = (**(code **)(*param_1 + 0x128))(param_1,local_8);
        (**(code **)(*(int *)local_18[0xd] + 100))((int *)local_18[0xd],uVar5,&local_58);
        InflateRect(&local_58,-1,-1);
        iVar4 = local_58.right + -1;
        local_58.right = iVar4;
        pHVar6 = (HDC)FUN_0042b5a8(local_18[8]);
        ExcludeClipRect(pHVar6,local_58.left,local_58.top,iVar4,local_58.bottom);
      }
      if (local_12 != '\0') {
        FUN_0050bbc4(local_18,local_c,1);
      }
      if ((param_2 == param_1[0x128]) &&
         (iVar4 = (**(code **)(*param_1 + 0x138))(), iVar4 == local_8)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(local_18 + 0x19) = uVar3;
      piVar7 = local_18 + (uint)bVar10 * -2 + 10;
      local_68.left = local_18[9];
      piVar8 = (int *)((int)&local_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(int *)((int)&local_68 + (uint)bVar10 * -8 + 4) = *piVar7;
      *piVar8 = piVar7[(uint)bVar10 * -2 + 1];
      piVar8[(uint)bVar10 * -2 + 1] = (piVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      InflateRect(&local_68,-*(int *)(local_18[0xd] + 0xc0),0);
      piVar8 = local_18 + (uint)bVar10 * -2 + 10;
      local_18[9] = local_68.left;
      piVar7 = (int *)((int)&local_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *piVar8 = *(int *)((int)&local_68 + (uint)bVar10 * -8 + 4);
      piVar8[(uint)bVar10 * -2 + 1] = *piVar7;
      (piVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = piVar7[(uint)bVar10 * -2 + 1];
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      if (((*(char *)(iVar4 + 0x4c) == '\0') ||
          (iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2),
          *(char *)(iVar4 + 0x4c) == '\x02')) &&
         ((cVar2 = (**(code **)(*param_1 + 0x16c))(param_1,param_2,local_8), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1,param_2,local_8,local_11), cVar2 != '\0'))
         )) {
        (**(code **)(*local_18 + 0x28))();
      }
      if ((*(byte *)(param_1 + 0x9c) & 0x80) != 0) {
        (**(code **)(*param_1 + 0xf8))(param_1,param_2,local_8,&local_7c);
        bVar9 = true;
        FUN_00405378(local_7c);
        if (!bVar9) {
          iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
          (**(code **)(**(int **)(iVar4 + 0x48) + 0x18))();
        }
      }
      iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
      if (*(char *)(iVar4 + 0x4c) != '\0') {
        iVar4 = *(int *)param_1[0x135];
        (**(code **)(iVar4 + 0x30))
                  ((int *)param_1[0x135],param_2,iVar4,
                   CONCAT31((int3)((uint)&local_28 >> 8),local_11),&local_28);
        uVar5 = FUN_0050a2cc();
        FUN_00403c80(param_1,uVar5,local_8);
      }
      if ((((*(byte *)((int)param_1 + 0x491) & 0x40) == 0) && (param_2 == param_1[0x128])) &&
         (iVar4 = (**(code **)(*param_1 + 0x138))(), iVar4 == local_8)) {
        FUN_00514088(param_1);
      }
      (**(code **)(*param_1 + 0x44))(param_1,local_78);
      FUN_004e64b0(param_1[0x82],local_78);
    }
  }
  puVar1 = puStack_8c;
  *in_FS_OFFSET = uStack_94;
  puStack_8c = &LAB_00510bc1;
  puStack_90 = (undefined1 *)0x510bb9;
  FUN_00404ff0(&local_7c,uStack_94,puVar1);
  return;
}

