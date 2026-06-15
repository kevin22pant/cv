/* ── Variables globales ── */
:root {
  --navy:   #1a2332;
  --navy2:  #243044;
  --teal:   #00b4d8;
  --teal2:  #0096c7;
  --white:  #f8f9fa;
  --gray:   #6c757d;
  --light:  #e9ecef;
  --text:   #212529;
  --radius: 12px;
  --font-display: 'Poppins', sans-serif;
  --font-body:    'Inter', sans-serif;
  --shadow: 0 4px 24px rgba(0,0,0,.12);
}

/* ── Reset base ── */
*, *::before, *::after { box-sizing: border-box; }

body {
  font-family: var(--font-body);
  background: var(--light);
  color: var(--text);
  margin: 0;
}

/* WRAPPER GENERAL */
.cv-wrapper {
  max-width: 1100px;
  margin: 2rem auto;
  background: #fff;
  border-radius: var(--radius);
  overflow: hidden;
  box-shadow: var(--shadow);
}

/* SIDEBAR */
.sidebar {
  background: var(--navy);
  color: #fff;
  position: relative;
}

.sidebar::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 4px;
  height: 100%;
  background: linear-gradient(180deg, var(--teal), var(--teal2));
}

/* Avatar contenedor */
.avatar-ring {
  width: 100px;
  height: 100px;
  border-radius: 50%;
  padding: 3px;
  background: linear-gradient(135deg, var(--teal), #48cae4);
  display: flex;
  align-items: center;
  justify-content: center;
}

/* Imagen de Avatar */
.avatar-img {
  width: 100%;
  height: 100%;
  border-radius: 50%;
  object-fit: cover;
  object-position: center top;
  border: 3px solid var(--navy);
  display: block;
}

/* Nombre y título */
.sidebar-name {
  font-family: var(--font-display);
  font-weight: 700;
  font-size: 1.35rem;
  letter-spacing: .5px;
  margin: 0;
  color: #fff;
}

.sidebar-title {
  font-size: .85rem;
  color: var(--teal);
  font-weight: 500;
  letter-spacing: 1px;
  text-transform: uppercase;
  margin-top: .25rem;
}

.teal-divider {
  width: 40px;
  height: 3px;
  background: var(--teal);
  border-radius: 99px;
  margin-top: 1rem;
}

/* Headings del sidebar */
.sidebar-section {
  margin-top: 1.75rem;
}

.sidebar-heading {
  font-family: var(--font-display);
  font-size: .75rem;
  font-weight: 500;
  letter-spacing: 2px;
  text-transform: uppercase;
  color: var(--teal);
  margin-bottom: .85rem;
  padding-bottom: .4rem;
  border-bottom: 1px solid rgba(255,255,255,.1);
}

/* Lista de contacto */
.contact-list {
  list-style: none;
  padding: 0;
  margin: 0;
  display: flex;
  flex-direction: column;
  gap: .6rem;
}

.contact-list li {
  display: flex;
  align-items: center;
  gap: .6rem;
  font-size: .82rem;
  color: rgba(255,255,255,.8);
  line-height: 1.4;
}

.contact-list i {
  color: var(--teal);
  font-size: .95rem;
  flex-shrink: 0;
  width: 18px;
}

.contact-list a {
  color: rgba(255,255,255,.8);
  text-decoration: none;
  transition: color .2s;
}
.contact-list a:hover { color: var(--teal); }

/* Barras de habilidades */
.skills-container {
  display: flex;
  flex-direction: column;
  gap: .9rem;
}

.skill-item { display: flex; flex-direction: column; gap: .25rem; }

.skill-label {
  font-size: .8rem;
  color: rgba(255,255,255,.85);
  font-weight: 500;
}

.skill-bar {
  height: 6px;
  background: rgba(255,255,255,.12);
  border-radius: 99px;
  overflow: hidden;
}

.skill-fill {
  height: 100%;
  background: linear-gradient(90deg, var(--teal), #48cae4);
  border-radius: 99px;
  transition: width .8s ease;
}

/* Idiomas */
.lang-list {
  list-style: none;
  padding: 0;
  margin: 0;
  display: flex;
  flex-direction: column;
  gap: .6rem;
}

.lang-list li {
  display: flex;
  justify-content: space-between;
  align-items: center;
}

.lang-name {
  font-size: .82rem;
  color: rgba(255,255,255,.85);
}

.lang-level {
  font-size: .7rem;
  font-weight: 600;
  padding: .2rem .55rem;
  border-radius: 99px;
  letter-spacing: .5px;
  text-transform: uppercase;
}

.lang-level.native       { background: var(--teal);   color: var(--navy); }
.lang-level.intermediate { background: rgba(0,180,216,.2); color: var(--teal); }

/* CONTENIDO PRINCIPAL */
.main-content { background: #fff; }

.cv-section { margin-bottom: 2.5rem; }

.section-title {
  font-family: var(--font-display);
  font-size: .72rem;
  font-weight: 600;
  letter-spacing: 2.5px;
  text-transform: uppercase;
  color: var(--gray);
  margin-bottom: 1.25rem;
  display: flex;
  align-items: center;
  gap: .75rem;
}

.section-title::after {
  content: '';
  flex: 1;
  height: 1px;
  background: var(--light);
}

.profile-text {
  font-size: .9rem;
  line-height: 1.75;
  color: #444;
}

/* TIMELINE */
.timeline {
  display: flex;
  flex-direction: column;
  gap: 1.5rem;
}

.timeline-item {
  display: flex;
  gap: 1rem;
}

.timeline-dot {
  flex-shrink: 0;
  width: 12px;
  height: 12px;
  border-radius: 50%;
  background: var(--teal);
  margin-top: .35rem;
  position: relative;
}

.timeline-dot::after {
  content: '';
  position: absolute;
  top: 12px;
  left: 50%;
  transform: translateX(-50%);
  width: 2px;
  height: calc(100% + 1.5rem - 12px);
  background: var(--light);
}

.timeline-item:last-child .timeline-dot::after { display: none; }

.timeline-body { flex: 1; }

.tl-role {
  font-family: var(--font-display);
  font-size: .95rem;
  font-weight: 600;
  color: var(--navy);
  margin: 0 0 .15rem;
}

.tl-org {
  font-size: .82rem;
  color: var(--gray);
  margin: 0 0 .4rem;
}

.tl-date {
  font-size: .75rem;
  font-weight: 600;
  background: rgba(0,180,216,.1);
  color: var(--teal2);
  padding: .2rem .55rem;
  border-radius: 99px;
  white-space: nowrap;
}

.tl-desc {
  font-size: .83rem;
  color: #555;
  margin: 0;
  line-height: 1.6;
}

/* CERTIFICACIONES */
.cert-badge {
  display: flex;
  align-items: center;
  font-size: .78rem;
  font-weight: 500;
  color: var(--navy);
  background: var(--light);
  border-radius: var(--radius);
  padding: .5rem .9rem;
  border-left: 3px solid var(--teal);
}

.cert-badge i { color: var(--teal); }

/* RESPONSIVO */
@media (max-width: 767.98px) {
  .cv-wrapper {
    margin: 0;
    border-radius: 0;
    box-shadow: none;
  }

  .sidebar {
    padding-bottom: 1.5rem;
  }

  .sidebar::before {
    width: 100%;
    height: 4px;
    top: 0; left: 0;
    background: linear-gradient(90deg, var(--teal), var(--teal2));
  }

  .sidebar-header {
    padding-top: 2.5rem !important;
  }

  .avatar-ring { width: 90px; height: 90px; }
  .sidebar-name { font-size: 1.15rem; }
  .main-content { padding: 2rem 1.25rem !important; }
  .tl-date {
    font-size: .68rem;
    padding: .15rem .4rem;
  }
}

@media (min-width: 992px) {
  .cv-wrapper { margin: 3rem auto; }
}

@media print {
  .cv-wrapper { box-shadow: none; margin: 0; border-radius: 0; }
  body { background: #fff; }
}