// Address: 00488430
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488430(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int aiStackY_1860 [1512];
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  LONG local_84;
  int aiStack_80 [3];
  tagRECT local_74;
  undefined4 local_64;
  undefined *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  tagRECT local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  char local_21;
  tagPOINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  local_90 = 0;
  local_94 = 0;
  local_10 = *param_2;
  local_c = param_2[1];
  puStack_a4 = (undefined1 *)0x488462;
  local_8 = param_1;
  FUN_00405628(&local_64,PTR_DAT_0047def4);
  puStack_a8 = &LAB_004887b6;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ac;
  *(undefined1 *)(local_8 + 0x58) = 0;
  puStack_a4 = &stack0xfffffffc;
  if ((*(char *)(local_8 + 0x88) != '\0') &&
     (puStack_a4 = &stack0xfffffffc, *(int *)(local_8 + 0x60) != 0)) {
    puStack_a4 = &stack0xfffffffc;
    cVar2 = FUN_0047e2ac();
    if (cVar2 != '\0') {
      FUN_00464ab4(&local_10,1);
      iVar4 = thunk_FUN_00485bfd();
      if (iVar4 == *(int *)(local_8 + 0x60)) {
        local_64 = *(undefined4 *)(local_8 + 0x60);
        local_5c = local_10;
        local_58 = local_c;
        iVar4 = FUN_004881d0();
        local_58 = local_58 + iVar4;
        local_54 = FUN_00484e64(DAT_0066cbf8);
        local_50 = *(undefined4 *)(local_8 + 0x5c);
        FUN_00465ba8(*(undefined4 *)(local_8 + 0x60),&local_84);
        local_4c.left = local_84;
        piVar5 = (int *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        *(int *)((int)&local_4c + (uint)bVar6 * -8 + 4) = aiStack_80[(uint)bVar6 * -2];
        *piVar5 = aiStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        piVar5[(uint)bVar6 * -2 + 1] =
             (aiStack_80 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        (**(code **)(**(int **)(local_8 + 0x60) + 0x40))(*(int **)(local_8 + 0x60),&local_18);
        local_20.x = 0;
        local_20.y = 0;
        piVar5 = *(int **)(*(int *)(local_8 + 0x60) + 0x30);
        if (piVar5 == (int *)0x0) {
          iVar4 = *(int *)(local_8 + 0x60);
          cVar2 = FUN_00403c10(iVar4,PTR_PTR_00461f94);
          if ((cVar2 != '\0') && (*(int *)(iVar4 + 400) != 0)) {
            ClientToScreen(*(HWND *)(iVar4 + 400),&local_20);
          }
        }
        else {
          (**(code **)(*piVar5 + 0x40))(piVar5,&local_20);
        }
        OffsetRect(&local_4c,local_20.x - local_18,local_20.y - local_14);
        FUN_00465d4c(*(undefined4 *)(local_8 + 0x60),&local_10,&local_8c);
        local_3c = local_8c;
        local_38 = local_88;
        FUN_00485bc0(*(undefined4 *)(local_8 + 0x60),&local_94);
        FUN_004632d4(local_94,&local_90);
        FUN_0040496c(&local_2c,local_90);
        local_34 = 0;
        local_30 = *(undefined4 *)(local_8 + 0x74);
        local_60 = PTR_PTR_006631e0;
        local_28 = 0;
        iVar4 = FUN_004673cc(*(undefined4 *)(local_8 + 0x60),0xb030,0,&local_64);
        local_21 = iVar4 == 0;
        if (((bool)local_21) && (*(short *)(local_8 + 0x132) != 0)) {
          (**(code **)(local_8 + 0x130))
                    (*(undefined4 *)(local_8 + 0x134),&local_2c,&local_21,&local_64);
        }
        if ((local_21 == '\0') || (*(int *)(local_8 + 0x60) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(local_8 + 0x58) = uVar3;
        if ((*(char *)(local_8 + 0x58) != '\0') && (local_2c != 0)) {
          FUN_00488324(local_60);
          (**(code **)(**(int **)(local_8 + 0x84) + 0x70))
                    (*(int **)(local_8 + 0x84),*(undefined1 *)(*(int *)(local_8 + 0x60) + 0x5f));
          (**(code **)(**(int **)(local_8 + 0x84) + 0xd8))
                    (*(int **)(local_8 + 0x84),local_54,local_2c,&local_74,local_28);
          OffsetRect(&local_74,local_5c,local_58);
          cVar2 = FUN_00403c80(*(undefined4 *)(local_8 + 0x84));
          if (cVar2 != '\0') {
            iVar4 = FUN_00488384(local_2c);
            local_74.left = local_74.left - (iVar4 + 5);
            local_74.right = local_74.right - (iVar4 + 5);
          }
          FUN_00465d20(*(undefined4 *)(local_8 + 0x60),&local_4c,&local_8c);
          *(undefined4 *)(local_8 + 100) = local_8c;
          *(undefined4 *)(local_8 + 0x68) = local_88;
          FUN_00465d20(*(undefined4 *)(local_8 + 0x60),&local_4c.right,&local_8c);
          *(undefined4 *)(local_8 + 0x6c) = local_8c;
          *(undefined4 *)(local_8 + 0x70) = local_88;
          FUN_004663a8(*(undefined4 *)(local_8 + 0x84),local_50);
          (**(code **)(**(int **)(local_8 + 0x84) + 0xd4))
                    (*(int **)(local_8 + 0x84),&local_74,local_2c,local_28);
          FUN_00485d0c();
          if (local_34 < 1) {
            FUN_00487fa0(local_8,local_30,1);
          }
          else {
            FUN_00487fa0(local_8,local_34,0);
          }
          goto LAB_0048878a;
        }
      }
    }
  }
  if (local_34 < 1) {
    FUN_00488198(local_8);
  }
  else {
    FUN_00487fa0(local_8,local_34,0);
  }
LAB_0048878a:
  puVar1 = puStack_a4;
  *in_FS_OFFSET = uStack_ac;
  puStack_a4 = &LAB_004887bd;
  puStack_a8 = (undefined1 *)0x4887a7;
  FUN_004048f8(&local_94,2,puVar1);
  puStack_a8 = (undefined1 *)0x4887b5;
  FUN_004056f8(&local_64,PTR_DAT_0047def4);
  return;
}

