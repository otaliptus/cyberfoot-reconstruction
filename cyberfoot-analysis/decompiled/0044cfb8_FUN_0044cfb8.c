// Address: 0044cfb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044cfb8(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_0044d196;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    iVar3 = FUN_00469730(*(undefined4 *)(param_1 + 0x30));
    puVar1 = puStack_2c;
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      local_8 = iVar3;
      do {
        uVar4 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar6);
        cVar2 = FUN_00403c10(uVar4,PTR_PTR_0044541c);
        if (cVar2 != '\0') {
          iVar3 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar6);
          if (param_1 != iVar3) {
            iVar3 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar6);
            if (param_2 == *(int *)(iVar3 + 0x20c)) {
              local_18 = *(undefined4 *)(param_2 + 8);
              local_14 = 0xb;
              iVar3 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar6);
              local_10 = *(undefined4 *)(iVar3 + 8);
              local_c = 0xb;
              FUN_0040e468(PTR_DAT_00408738,1,PTR_PTR_0066b708,1,&local_18);
              FUN_00404250();
            }
          }
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + -1;
        puVar1 = puStack_2c;
      } while (local_8 != 0);
    }
  }
  puStack_2c = puVar1;
  if (*(int *)(param_1 + 0x20c) != 0) {
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0x469;
      pHVar5 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar5,UVar7,WVar8,LVar9);
    }
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x30))) {
    cVar2 = FUN_00403c10(param_2,PTR_PTR_0044541c);
    if (cVar2 == '\0') {
      cVar2 = FUN_00403c10(param_2,DAT_006620c8);
      if (cVar2 == '\0') {
        cVar2 = FUN_00403c10(param_2,PTR_PTR_00446d98);
        if (cVar2 == '\0') {
          uVar4 = FUN_004039cc(param_2);
          cVar2 = FUN_0044cf88(uVar4,"TDBEdit");
          if (cVar2 == '\0') {
            uVar4 = FUN_004039cc(param_2);
            cVar2 = FUN_0044cf88(uVar4,"TDBMemo");
            if (cVar2 == '\0') {
              cVar2 = FUN_0046cde4(param_1);
              if (cVar2 != '\0') {
                FUN_0044d1c4(param_1,param_2);
                LVar9 = 0;
                WVar8 = FUN_0046cae0(param_2);
                UVar7 = 0x469;
                pHVar5 = (HWND)FUN_0046cae0(param_1);
                SendMessageA(pHVar5,UVar7,WVar8,LVar9);
              }
              *(int *)(param_1 + 0x20c) = param_2;
              cVar2 = FUN_00403c10(param_2,PTR_PTR_00457f24);
              if (cVar2 != '\0') {
                FUN_00409dd8((int)*(short *)(param_1 + 0x21c),&local_1c);
                FUN_00466238(param_2,local_1c);
              }
            }
          }
        }
      }
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0044d19d;
  puStack_30 = (undefined1 *)0x44d195;
  FUN_004048d4(&local_1c,uStack_34,puVar1);
  return;
}

