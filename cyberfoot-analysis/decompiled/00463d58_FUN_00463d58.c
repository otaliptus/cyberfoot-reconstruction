// Address: 00463d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00463d58(LONG *param_1,int *param_2)

{
  POINT pt;
  char cVar1;
  ushort uVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RECT local_2c;
  int local_1c;
  int *local_18;
  int *local_14;
  LONG local_d;
  LONG local_9;
  char local_5;
  
  local_d = *param_1;
  local_9 = param_1[1];
  local_1c = 0;
  if (DAT_0066cb98 != 0) {
    local_14 = param_2;
    uVar2 = GetKeyState(0x11);
    if (((uVar2 & 0x8000) != 0) != (bool)*(char *)(*(int *)PTR_DAT_0066b3ac + 0xb4)) {
      (**(code **)(*DAT_0066cb9c + 8))();
      iVar5 = *(int *)(DAT_0066cb98 + 8);
      if (-1 < iVar5 + -1) {
        iVar6 = 0;
        do {
          local_18 = (int *)FUN_0041e01c(DAT_0066cb98,iVar6);
          if ((local_18 != local_14) && (*(char *)((int)local_18 + 0x1a6) != '\0')) {
            cVar1 = (**(code **)(*local_18 + 0x50))();
            if (cVar1 != '\0') {
              hWnd = (HWND)FUN_0046cae0(local_18);
              BVar3 = IsWindowVisible(hWnd);
              if (BVar3 != 0) {
                cVar1 = FUN_00463d14();
                if (cVar1 == '\0') {
                  if ((int *)local_14[0x28] == local_18) {
                    iVar4 = FUN_0046b530(local_18);
                    if (iVar4 < 2) goto LAB_00463e6e;
                  }
                  local_5 = '\x01';
                  FUN_00403c80(local_18,local_14,&local_2c,&local_5,&local_d);
                  if (local_5 != '\0') {
                    pt.y = local_9;
                    pt.x = local_d;
                    BVar3 = PtInRect(&local_2c,pt);
                    if (BVar3 != 0) {
                      FUN_004634e0(DAT_0066cb9c,local_18);
                    }
                  }
                }
              }
            }
          }
LAB_00463e6e:
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (0 < DAT_0066cb9c[2]) {
        local_1c = FUN_00463570(DAT_0066cb9c);
      }
      if (local_1c != 0) {
        cVar1 = FUN_00463b7c(local_1c);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
      }
    }
  }
  return local_1c;
}

