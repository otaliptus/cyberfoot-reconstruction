// Address: 0051530c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051530c(int *param_1,int param_2,int param_3,byte param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  LPARAM lParam;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  char local_9;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_005155bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_3;
  if ((param_2 != param_1[0xa0]) || (puVar1 = &stack0xfffffffc, param_3 != param_1[0xa1])) {
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
    uVar4 = (**(code **)(*piVar3 + 0x3c))();
    puVar1 = puStack_2c;
    if (((uVar4 & 1) != 0) && ((char)param_1[0x126] == '\0')) {
      cVar2 = (**(code **)(*param_1 + 0xe8))();
      puVar1 = puStack_2c;
      if (cVar2 != '\0') {
        iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
        if (*(int *)(iVar5 + 100) == 0) {
          iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
          puVar1 = puStack_2c;
          if (*(int *)(iVar5 + 0x50) == 0) goto LAB_005155a6;
        }
        iVar5 = (**(code **)(*param_1 + 0x11c))();
        puVar1 = puStack_2c;
        if ((local_8 < iVar5) && (-1 < local_8)) {
          iVar5 = FUN_0050ae9c(param_1[0x135]);
          puVar1 = puStack_2c;
          if ((param_2 < iVar5) && (-1 < param_2)) {
            local_9 = '\x01';
            FUN_00403c80(param_1,param_2,local_8,&local_9);
            puVar1 = puStack_2c;
            if (local_9 != '\0') {
              (**(code **)(*param_1 + 0x1c0))();
              (**(code **)(*param_1 + 0x1e8))();
              *(ushort *)(param_1 + 0x139) = *(ushort *)(param_1 + 0x139) | 8;
              FUN_004070b8(param_2,local_8,&local_18);
              param_1[0xa0] = local_18;
              param_1[0xa1] = local_14;
              iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
              if (*(int *)(iVar5 + 100) == 0) {
                iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
                puVar1 = puStack_2c;
                if (*(int *)(iVar5 + 0x50) == 0) goto LAB_005155a6;
                iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
                FUN_0050eb88(param_1,*(undefined4 *)(iVar5 + 0x50));
                (**(code **)(*param_1 + 0x19c))();
                local_10 = (int *)param_1[0xb5];
                piVar3 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))
                                          ((int *)param_1[0x135],param_2);
                (**(code **)(*piVar3 + 0x6c))();
                FUN_004ef4cc(local_10,0);
                uVar6 = (**(code **)(*param_1 + 0xf4))(param_1,param_2,local_8);
                FUN_004663a8(local_10,uVar6);
                iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
                (**(code **)(*(int *)local_10[0x1a] + 8))
                          ((int *)local_10[0x1a],*(undefined4 *)(iVar5 + 0x58));
                (**(code **)(*param_1 + 0x19c))();
                (**(code **)(*local_10 + 300))();
              }
              else {
                iVar5 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
                FUN_0050eb88(param_1,*(undefined4 *)(iVar5 + 100));
                if ((*(byte *)((int)param_1 + 0x492) & 1) == 0) {
                  (**(code **)(*param_1 + 0x19c))();
                }
              }
              FUN_005116b0(param_1);
              iVar5 = param_1[0xb5];
              *(undefined1 *)(iVar5 + 0x210) = 0;
              lParam = 0;
              uVar4 = (uint)param_4;
              Msg = 0x102;
              hWnd = (HWND)FUN_0046cae0(iVar5);
              SendMessageA(hWnd,Msg,uVar4,lParam);
              puVar1 = puStack_2c;
              if (param_1[0xb5] != 0) {
                *(undefined1 *)(param_1[0xb5] + 0x210) = 1;
                (**(code **)(*param_1 + 0x18c))();
                *(undefined1 *)(param_1 + 0xb6) = 0;
                piVar3 = (int *)param_1[0xb5];
                FUN_00466208(piVar3,&local_1c);
                uVar6 = FUN_00404ba4(local_1c);
                (**(code **)(*piVar3 + 0xdc))(piVar3,uVar6);
                FUN_00403c80(param_1);
                puVar1 = puStack_2c;
              }
            }
          }
        }
      }
    }
  }
LAB_005155a6:
  puStack_2c = puVar1;
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005155c3;
  puStack_30 = (undefined1 *)0x5155bb;
  FUN_004048d4(&local_1c,uStack_34,puVar1);
  return;
}

