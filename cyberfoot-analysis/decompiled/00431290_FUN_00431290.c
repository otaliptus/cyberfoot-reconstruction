// Address: 00431290
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431290(int *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  HDC hdc;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_7c;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined2 local_3d;
  ushort local_3b;
  undefined4 local_39;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  char local_d;
  HPALETTE local_c;
  int *local_8;
  
  bVar7 = 0;
  local_8 = param_1;
  bVar2 = FUN_0043036c(param_1);
  if (param_2 != bVar2) {
    if (param_2 == 0) {
      (**(code **)(*local_8 + 0x6c))(local_8,1);
    }
    else {
      if (param_2 != 8) {
        FUN_004032a8(&local_61,0x54,0);
        iVar1 = local_8[10];
        puVar5 = (undefined4 *)(iVar1 + 0x18);
        puVar6 = &local_61;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        local_d = '\0';
        local_4d = 0;
        local_49 = 0x28;
        local_45 = local_5d;
        local_41 = local_59;
        local_3d = 1;
        local_3b = (ushort)(byte)(&DAT_0066295f)[param_2];
        local_c = *(HPALETTE *)(iVar1 + 0x10);
        if (param_2 == 2) {
          local_c = DAT_0066c894;
        }
        else if (param_2 == 3) {
          GetDC((HWND)0x0);
          hdc = (HDC)FUN_0042b9a0();
          local_c = CreateHalftonePalette(hdc);
          local_d = '\x01';
          uStack_7c = 0x43136e;
          ReleaseDC((HWND)0x0,hdc);
        }
        else if (param_2 == 5) {
          local_39 = 3;
          local_21 = 0xf800;
          local_1d = 0x7e0;
          local_19 = 0x1f;
        }
        uStack_7c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_7c;
        puVar5 = &local_61;
        uVar3 = (**(code **)(*local_8 + 100))();
        FUN_0042fe4c(local_8,uVar3,local_c,puVar5);
        *(bool *)((int)local_8 + 0x22) = local_c != (HPALETTE)0x0;
        *in_FS_OFFSET = uStack_7c;
        if (local_d != '\0') {
          uStack_7c = 0x4313dc;
          DeleteObject(local_c);
        }
        return;
      }
      FUN_0042b868(PTR_PTR_0066afa8);
    }
  }
  return;
}

