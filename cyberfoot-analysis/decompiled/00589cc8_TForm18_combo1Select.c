// Address: 00589cc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm18_combo1Select(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 7;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uVar5 = 1;
  local_20 = &LAB_0058a076;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x589cf8;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  iVar1 = *(int *)(param_1 + 0x338);
  local_28 = 0x589d05;
  uVar4 = FUN_0054c0f0(iVar1);
  piVar2 = *(int **)(iVar1 + 0x23c);
  local_28 = 0x589d15;
  (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_8);
  local_28 = 0x589d22;
  FUN_00404cf0(local_8,"Todos os jogos");
  if ((bool)uVar5) {
    local_28 = 0x589d2e;
    FUN_00588bdc(param_1,0xffffffff);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x338);
    local_28 = 0x589d40;
    uVar4 = FUN_0054c0f0(iVar1);
    piVar2 = *(int **)(iVar1 + 0x23c);
    local_28 = 0x589d50;
    (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_c);
    local_28 = 0x589d5d;
    FUN_00404cf0(local_c,"Amistosos");
    if ((bool)uVar5) {
      local_28 = 0x589d68;
      FUN_00588bdc(param_1,0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x338);
      local_28 = 0x589d7a;
      uVar4 = FUN_0054c0f0(iVar1);
      piVar2 = *(int **)(iVar1 + 0x23c);
      local_28 = 0x589d8a;
      (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_10);
      local_28 = 0x589d97;
      FUN_00404cf0(local_10,"Nacional");
      if ((bool)uVar5) {
        local_28 = 0x589da5;
        FUN_00588bdc(param_1,1);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x338);
        local_28 = 0x589db7;
        uVar4 = FUN_0054c0f0(iVar1);
        piVar2 = *(int **)(iVar1 + 0x23c);
        local_28 = 0x589dc7;
        (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&stack0xffffffec);
        local_28 = 0x589dd4;
        FUN_00404cf0(unaff_EBX,"Estadual");
        if ((bool)uVar5) {
          local_28 = 0x589de2;
          FUN_00588bdc(param_1,3);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x338);
          local_28 = 0x589df4;
          uVar4 = FUN_0054c0f0(iVar1);
          piVar2 = *(int **)(iVar1 + 0x23c);
          local_28 = 0x589e04;
          (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&stack0xffffffe8);
          local_28 = 0x589e11;
          FUN_00404cf0(unaff_ESI,&DAT_0058a0e0);
          if ((bool)uVar5) {
            local_28 = 0x589e1f;
            FUN_00588bdc(param_1,2);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x338);
            local_28 = 0x589e31;
            uVar4 = FUN_0054c0f0(iVar1);
            piVar2 = *(int **)(iVar1 + 0x23c);
            local_28 = 0x589e41;
            (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_1c);
            local_28 = 0x589e4e;
            FUN_00404cf0(local_1c,"Libertadores");
            if ((bool)uVar5) {
              local_28 = 0x589e5c;
              FUN_00588bdc(param_1,4);
            }
            else {
              iVar1 = *(int *)(param_1 + 0x338);
              local_28 = 0x589e6e;
              uVar4 = FUN_0054c0f0(iVar1);
              piVar2 = *(int **)(iVar1 + 0x23c);
              local_28 = 0x589e7e;
              (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_20);
              local_28 = 0x589e8b;
              FUN_00404cf0(local_20,&DAT_0058a108);
              if ((bool)uVar5) {
                local_28 = 0x589e99;
                FUN_00588bdc(param_1,4);
              }
              else {
                iVar1 = *(int *)(param_1 + 0x338);
                local_28 = 0x589eab;
                uVar4 = FUN_0054c0f0(iVar1);
                piVar2 = *(int **)(iVar1 + 0x23c);
                local_28 = 0x589ebb;
                (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_28);
                uVar4 = local_28;
                local_28 = 0x589ec6;
                FUN_004051d4(&local_24,uVar4);
                local_28 = 0x589ed7;
                FUN_00405378(local_24,*(undefined4 *)(PTR_DAT_0066b3f8 + 8));
                if ((bool)uVar5) {
                  local_28 = 0x589ee5;
                  FUN_00588bdc(param_1,4);
                }
                else {
                  iVar1 = *(int *)(param_1 + 0x338);
                  local_28 = 0x589ef7;
                  uVar4 = FUN_0054c0f0(iVar1);
                  piVar2 = *(int **)(iVar1 + 0x23c);
                  local_28 = 0x589f07;
                  (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_30);
                  local_28 = 0x589f12;
                  FUN_004051d4(&local_2c,local_30);
                  local_28 = 0x589f23;
                  FUN_00405378(local_2c,*(undefined4 *)(PTR_DAT_0066b3f8 + 0xc));
                  if ((bool)uVar5) {
                    local_28 = 0x589f31;
                    FUN_00588bdc(param_1,4);
                  }
                  else {
                    iVar1 = *(int *)(param_1 + 0x338);
                    local_28 = 0x589f43;
                    uVar4 = FUN_0054c0f0(iVar1);
                    piVar2 = *(int **)(iVar1 + 0x23c);
                    local_28 = 0x589f53;
                    (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_34);
                    local_28 = 0x589f60;
                    FUN_00404cf0(local_34,"Sul-Americana");
                    if ((bool)uVar5) {
                      local_28 = 0x589f6e;
                      FUN_00588bdc(param_1,6);
                    }
                    else {
                      iVar1 = *(int *)(param_1 + 0x338);
                      local_28 = 0x589f80;
                      uVar4 = FUN_0054c0f0(iVar1);
                      piVar2 = *(int **)(iVar1 + 0x23c);
                      local_28 = 0x589f90;
                      (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_38);
                      local_28 = 0x589f9d;
                      FUN_00404cf0(local_38,"Liga Europa");
                      if ((bool)uVar5) {
                        local_28 = 0x589fab;
                        FUN_00588bdc(param_1,6);
                      }
                      else {
                        iVar1 = *(int *)(param_1 + 0x338);
                        local_28 = 0x589fba;
                        uVar4 = FUN_0054c0f0(iVar1);
                        piVar2 = *(int **)(iVar1 + 0x23c);
                        local_28 = 0x589fca;
                        (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_3c);
                        local_28 = 0x589fd7;
                        FUN_00404cf0(local_3c,"Recopa Europeia");
                        if ((bool)uVar5) {
                          local_28 = 0x589fe5;
                          FUN_00588bdc(param_1,10);
                        }
                        else {
                          iVar1 = *(int *)(param_1 + 0x338);
                          local_28 = 0x589ff4;
                          uVar4 = FUN_0054c0f0(iVar1);
                          piVar2 = *(int **)(iVar1 + 0x23c);
                          local_28 = 0x58a004;
                          (**(code **)(*piVar2 + 0xc))(piVar2,uVar4,&local_40);
                          local_28 = 0x58a011;
                          FUN_00404cf0(local_40,"Recopa Sul-Americana");
                          if ((bool)uVar5) {
                            local_28 = 0x58a01f;
                            FUN_00588bdc(param_1,10);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_28 = 0x58a02f;
  uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxdatareal");
  local_28 = 0x58a036;
  FUN_0050a760(uVar4,1);
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0058a07d;
  local_20 = (undefined1 *)0x58a050;
  FUN_004048f8(&local_40,5,puVar3);
  local_20 = (undefined1 *)0x58a058;
  FUN_00404ff0(&local_2c);
  local_20 = (undefined1 *)0x58a060;
  FUN_004048d4(&local_28);
  local_20 = (undefined1 *)0x58a068;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x58a075;
  FUN_004048f8(&local_20,7);
  return;
}

