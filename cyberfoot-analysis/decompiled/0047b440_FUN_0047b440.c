// Address: 0047b440
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b440(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  HMENU hMenu;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  int local_18;
  int local_14;
  
  FUN_0041c968(param_2,param_3,&local_18);
  param_1[0x16] = local_18;
  param_1[0x17] = local_14;
  FUN_0047b3ac(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,param_1);
  FUN_0047970c(param_1[0xd],0);
  FUN_00479c08(param_1[0xd],0);
  FUN_00476fb0(param_1[0xd]);
  FUN_0047a5b0(param_1);
  uVar1 = FUN_0047b3f4(param_1);
  uVar1 = (uint)(*(ushort *)
                  (&DAT_006631d0 + (uint)*(byte *)(param_1 + 0x18) * 2 + (uVar1 & 0x7f) * 6) |
                *(ushort *)(&DAT_006631dc + (uint)*(byte *)(param_1 + 0x1a) * 2)) |
          (uint)*(byte *)((int)param_1 + 0x69) << 10;
  prcRect = (RECT *)0x0;
  hWnd = *(HWND *)(DAT_0066cbe4 + 0x10);
  nReserved = 0;
  hMenu = (HMENU)FUN_004770e0(param_1[0xd]);
  TrackPopupMenu(hMenu,uVar1,param_2,param_3,nReserved,hWnd,prcRect);
  return;
}

