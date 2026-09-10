// Address: 004b2910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b2910(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  SIZE_T dwBytes;
  uint uVar6;
  undefined4 uVar7;
  LPSTREAM *ppstm;
  HRESULT HVar8;
  undefined4 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_64;
  undefined1 *puStackY_60;
  undefined1 *puStackY_5c;
  undefined4 uStackY_58;
  int *piStackY_54;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_2c;
  int local_20;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  int *local_14;
  int *local_10;
  LPVOID local_c;
  HGLOBAL local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_10 = (int *)0x0;
  puStack_40 = &LAB_004b2c54;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
  if ((extraout_EDX != 0) || (iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    dwBytes = (**(code **)**(undefined4 **)(param_1 + 0x28))();
    local_8 = GlobalAlloc(2,dwBytes);
    if (local_8 == (HGLOBAL)0x0) {
      FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
      FUN_00404250();
    }
    local_c = GlobalLock(local_8);
    FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    cVar4 = FUN_004b32c8(param_1);
    if ((cVar4 == '\0') || (iVar5 = FUN_004b31b4(param_1), iVar5 < 1)) {
      puVar1 = *(undefined4 **)(param_1 + 0x28);
      uVar7 = (**(code **)*puVar1)();
      FUN_00420b00(puVar1,local_c,uVar7);
    }
    else {
      local_14 = (int *)FUN_00403a54(PTR_PTR_0041c090,1);
      local_20 = 1;
      bVar2 = false;
      FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
      (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),param_1 + 0x6c,2);
      (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),param_1 + 0x6e,2);
      local_2c = (**(code **)**(undefined4 **)(param_1 + 0x28))();
      if (0 < local_2c) {
        iVar5 = 1;
        do {
          FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
          (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&local_15,1);
          if (local_15 == '!') {
            uVar6 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
            iVar10 = (int)(iVar5 + 8U) >> 0x1f;
            if (iVar10 == extraout_EDX_00) {
              if (iVar5 + 8U < uVar6) {
LAB_004b2a76:
                (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                          (*(int **)(param_1 + 0x28),&local_16,1);
                (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                          (*(int **)(param_1 + 0x28),&local_17,1);
                uVar7 = *(undefined4 *)(param_1 + 0x28);
                FUN_004208d4(uVar7);
                FUN_004208f4(uVar7);
                (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                          (*(int **)(param_1 + 0x28),&local_18,1);
                if (((local_16 == -7) && (local_17 == '\x04')) && (local_18 == ',')) {
                  if (*(int *)(param_1 + 0x50) == local_20) {
                    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                              (*(int **)(param_1 + 0x28),param_1 + 0x60,2);
                    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                              (*(int **)(param_1 + 0x28),param_1 + 0x62,2);
                    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                              (*(int **)(param_1 + 0x28),param_1 + 100,2);
                    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))
                              (*(int **)(param_1 + 0x28),param_1 + 0x66,2);
                  }
                  local_20 = local_20 + 1;
                  if (*(int *)(param_1 + 0x50) < local_20) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                }
              }
            }
            else if (iVar10 < extraout_EDX_00) goto LAB_004b2a76;
          }
          if (!bVar2) {
            (**(code **)(*local_14 + 0x10))(local_14,&local_15,1);
          }
          iVar5 = iVar5 + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      FUN_004208f4(local_14);
      uVar7 = (**(code **)*local_14)();
      FUN_00420b00(local_14,local_c,uVar7);
      FUN_00403a84(local_14);
    }
    GlobalUnlock(local_8);
    FUN_00406880(&local_10);
    ppstm = (LPSTREAM *)FUN_00406880(&local_10);
    piStackY_54 = (int *)0x4b2bb2;
    HVar8 = CreateStreamOnHGlobal(local_8,-1,ppstm);
    if (HVar8 == 0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))();
      piStackY_54 = local_10;
      uStackY_58 = 0x4b2bd6;
      (**(code **)(*local_10 + 0x10))();
      uStackY_58 = 0;
      puStackY_5c = (undefined1 *)0x4b2be7;
      uVar7 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_10);
      puStackY_60 = &LAB_004b2c24;
      uStackY_64 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_64;
      puStackY_5c = &stack0xfffffffc;
      uVar9 = FUN_004b1b8c(uVar7);
      *(undefined4 *)(param_1 + 0x48) = uVar9;
      uVar9 = FUN_004b1b24(uVar7);
      puVar3 = puStackY_5c;
      *(undefined4 *)(param_1 + 0x44) = uVar9;
      *in_FS_OFFSET = uStackY_64;
      puStackY_5c = &DAT_004b2c2b;
      puStackY_60 = (undefined1 *)0x4b2c23;
      FUN_00403a84(uVar7,uStackY_64,puVar3);
      return;
    }
    GlobalFree(local_8);
  }
  puVar3 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004b2c5b;
  puStack_40 = (undefined1 *)0x4b2c53;
  FUN_00406880(&local_10,uStack_44,puVar3);
  return;
}

